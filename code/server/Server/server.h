#ifndef SERVER_H
#define SERVER_H

#include "database.h"
#include "json/json.h"

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <cstdint>
#include <unordered_set>

class Server : public QObject
{
    static constexpr int BufferSize = 1 << 15;

public:
    Server();

    void Run();

private:
    Database _db;
    std::unordered_set<QTcpSocket*> _onlineSocket;
    QTcpServer tcpServer;

public:
    void Register(QTcpSocket*, QString, QString);
    void Login(QTcpSocket*, QString, QString);
    void Logout(QTcpSocket*);
    void SendEmail(QTcpSocket*, uint32_t, uint32_t, QString, QString);
    void ReceiveEmail(QTcpSocket*, uint32_t);
};

#endif // SERVER_H
