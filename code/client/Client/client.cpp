#include "client.h"
#include <QMessageBox>
#include <memory>

Client::Client(QObject *parent) : QObject(parent)
{
}

void Client::Run()
{
    static const int Port = 1936;
    tcpSocket.connectToHost("0.0.0.0", Port);
    if (!tcpSocket.waitForConnected())
    {
        qDebug() << "connection failed.";
        return;
    }
    connect(&tcpSocket, &QTcpSocket::readyRead, [&]()
    {
        static char buffer[BufferSize];
        if (tcpSocket.read(buffer, BufferSize) < 0)
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
            bool res = root["return"].asBool();
            if (res)
            {
                QMessageBox message(QMessageBox::Information, "", "Register succeed!");
                message.exec();
            }
            else
            {
                QMessageBox message_f(QMessageBox::Critical, "", "Register failed!");
                message_f.exec();
            }
        }
        else if (root["op"].asString() == "login")
        {
            Login::userId = root["return"].asInt();
            if (Login::userId)
            {
                QMessageBox message(QMessageBox::Information, "", "Login succeed!");
                message.exec();
            }
            else
            {
                QMessageBox message_f(QMessageBox::Critical, "", "Login failed!");
                message_f.exec();
            }
        }
        else if (root["op"].asString() == "send")
        {
            QMessageBox message(QMessageBox::Information, "", "Send succeed!");
            message.exec();
        }
        else if (root["op"].asString() == "receive")
        {
            Inbox::mails.clear();
            Json::Value mails = root["mails"];
            for (int i = 0; i < (int)mails.size(); i++)
            {
                QString sendUser = mails[i]["sendUser"].asString().data();
                QString theme = mails[i]["theme"].asString().data();
                QString content = mails[i]["content"].asString().data();
                Inbox::mails.emplace_back(sendUser, theme, content);
            }
        }
    });
}

QTcpSocket Client::tcpSocket;
