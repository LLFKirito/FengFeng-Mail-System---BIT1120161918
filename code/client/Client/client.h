#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QString>
#include <QTcpSocket>
#include <QDebug>

#include "json/json.h"
#include "register.h"
#include "login.h"
#include "edit.h"
#include "inbox.h"

class Client : public QObject
{
    Q_OBJECT

public:
    static QTcpSocket tcpSocket;

    static constexpr int BufferSize = 1 << 15;

    explicit Client(QObject *parent = nullptr);

    void Run();
};

#endif // CLIENT_H
