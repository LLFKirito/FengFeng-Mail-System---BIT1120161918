#include <QApplication>

#include "server.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Server server;
    server.Run();

    return a.exec();
}
