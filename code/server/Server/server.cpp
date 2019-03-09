#include "server.h"

Server::Server()
{
}

void Server::Register(QTcpSocket* tcpSocket, QString username, QString password)
{
    bool res = _db.AddUser(User(username, password));
    qDebug() << "register result: " << res;
    static char buffer[BufferSize];
    Json::Value root;
    root["op"] = "register";
    root["return"] = res;
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, BufferSize);
}

void Server::Login(QTcpSocket* tcpSocket, QString username, QString password)
{
    uint32_t userId = _db.FindUser(User(username, password));
    qDebug() << "login Id: " << userId;
    _onlineSocket.insert(tcpSocket);
    static char buffer[BufferSize];
    Json::Value root;
    root["op"] = "login";
    root["return"] = userId;
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, BufferSize);
}

void Server::Logout(QTcpSocket* tcpSocket)
{
    if (_onlineSocket.find(tcpSocket) != _onlineSocket.end())
        _onlineSocket.erase(tcpSocket);
}

void Server::SendEmail(QTcpSocket *tcpSocket, uint32_t sendId, uint32_t recId, QString theme, QString content)
{
    _db.AddMail(Mail(sendId, recId, theme, content));
    static char buffer[BufferSize];
    Json::Value root;
    root["op"] = "send";
    root["return"] = true;
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, BufferSize);
}

void Server::ReceiveEmail(QTcpSocket *tcpSocket, uint32_t recId)
{
    std::vector<Mail> mails = _db.GetMail(recId);
    static char buffer[BufferSize];
    Json::Value root;
    root["op"] = "receive";
    for (auto& mail : mails)
    {
        Json::Value temp;
        temp["sendUser"] = _db.GetUsername(mail.GetSendUserId()).toStdString();
        temp["theme"] = mail.GetTheme().toStdString();
        temp["content"] = mail.GetText().toStdString();
        root["mails"].append(temp);
    }
    strcpy(buffer, root.toStyledString().data());
    tcpSocket->write(buffer, BufferSize);
}

void Server::Run()
{
    static const int Port = 1936;
    if (!tcpServer.listen(QHostAddress::Any, Port))
    {
        qDebug() << "listen failed.";
        return;
    }
    connect(&tcpServer, &QTcpServer::newConnection, [&]()
    {
        qDebug() << "new connection.";
        QTcpSocket* tcpSocket = tcpServer.nextPendingConnection();
        if (!tcpSocket)
        {
            qDebug() << "connection failed.";
            return;
        }
        connect(tcpSocket, &QTcpSocket::readyRead, [&, tcpSocket]()
        {
            static char buffer[BufferSize];
            if (tcpSocket->read(buffer, BufferSize) < 0)
            {
                qDebug() << "receive failed.";
                return;
            }
            Json::Value root;
            Json::CharReader* reader(Json::CharReaderBuilder().newCharReader());
            JSONCPP_STRING errs;
            if (!reader->parse(buffer, buffer + BufferSize, &root, &errs))
            {
                qDebug() << "read json failed.";
                return;
            }
            if (root["op"].asString() == "register")
            {
                QString username = root["username"].asString().data();
                QString password = root["password"].asString().data();
                Register(tcpSocket, username, password);
            }
            else if (root["op"].asString() == "login")
            {
                QString username = root["username"].asString().data();
                QString password = root["password"].asString().data();
                Login(tcpSocket, username, password);
            }
            else if (root["op"].asString() == "send")
            {
                QString sendUser = root["sendUser"].asString().data();
                QString recUser = root["recUser"].asString().data();
                QString theme = root["theme"].asString().data();
                QString content = root["content"].asString().data();
                uint32_t sendId = _db.GetUserId(sendUser);
                uint32_t recId = _db.GetUserId(recUser);
                SendEmail(tcpSocket, sendId, recId, theme, content);
            }
            else if (root["op"].asString() == "receive")
            {
                QString recUser = root["recUser"].asString().data();
                uint32_t recId = _db.GetUserId(recUser);
                ReceiveEmail(tcpSocket, recId);
            }
        });
        connect(tcpSocket, &QTcpSocket::disconnected, [&, tcpSocket]()
        {
            qDebug() << "disconnection succeed.";
            Logout(tcpSocket);
        });
    });
}
