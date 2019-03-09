#include <QApplication>
#include"edit.h"
#include "manager.h"
#include"inbox.h"
#include"login.h"
#include"register.h"
#include"contact.h"
#include "send.h"
#include"drafts.h"
#include"dustbin.h"
#include "client.h"
#include<QFileDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Client client;
    client.Run();
    Login::tcpSocket = &client.tcpSocket;
    Register::tcpSocket = &client.tcpSocket;
    edit::tcpSocket = &client.tcpSocket;
    Inbox::tcpSocket = &client.tcpSocket;
    Login login;
    login.show();
    Register reg;
    edit hhh;
    manager m;
    Inbox inbox;
    Contact con;
    Send send;
    Drafts drafts;
    Dustbin dustbin;
    QObject::connect(&login,SIGNAL(LoginGoManager(QString)),&m,SLOT(ManagerShow(QString)));

    QObject::connect(&m,SIGNAL(ManagerGoLogin()),&login,SLOT(LoginShow()));
    QObject::connect(&m,SIGNAL(ManagerGoEdit(QString)),&hhh,SLOT(EditShow(QString)));
    QObject::connect(&m,SIGNAL(ManagerGoInbox(QString)),&inbox,SLOT(InboxShow(QString)));
    QObject::connect(&m,SIGNAL(ManagerGoContact(QString)),&con,SLOT(ContactShow(QString)));
    QObject::connect(&m,SIGNAL(ManagerGoSend(QString)), &send,SLOT(SendShow(QString)));
    QObject::connect(&m,SIGNAL(ManagerGoDrafts(QString)), &drafts,SLOT(DraftsShow(QString)));
    QObject::connect(&m,SIGNAL(ManagerGoDustbin(QString)), &dustbin,SLOT(DustbinShow(QString)));

    //QObject::connect(&inbox,SIGNAL(InboxGoManager()),&m,SLOT(ManagerShow()));
    QObject::connect(&inbox,SIGNAL(InboxGoEdit(QString)),&hhh,SLOT(EditShow(QString)));
    QObject::connect(&inbox,SIGNAL(InboxGoContact(QString)),&con,SLOT(ContactShow(QString)));
    QObject::connect(&inbox,SIGNAL(InboxGoLogin()),&login,SLOT(LoginShow()));
    QObject::connect(&inbox,SIGNAL(InboxGoSend(QString)), &send,SLOT(SendShow(QString)));
    QObject::connect(&inbox,SIGNAL(InboxGoDrafts(QString)), &drafts,SLOT(DraftsShow(QString)));
    QObject::connect(&inbox,SIGNAL(InboxGoDustbin(QString)), &dustbin,SLOT(DustbinShow(QString)));

    QObject::connect(&hhh,SIGNAL(EditGoManager(QString)),&m,SLOT(ManagerShow(QString)));
    QObject::connect(&hhh,SIGNAL(EditGoInbox(QString)),&inbox,SLOT(InboxShow(QString)));
    QObject::connect(&hhh,SIGNAL(EditGoContact(QString)),&con,SLOT(ContactShow(QString)));
    QObject::connect(&hhh,SIGNAL(EditGoLogin()),&login,SLOT(LoginShow()));
    QObject::connect(&hhh,SIGNAL(EditGoSend(QString)), &send,SLOT(SendShow(QString)));
    QObject::connect(&hhh,SIGNAL(EditGoDrafts(QString)), &drafts,SLOT(DraftsShow(QString)));
    QObject::connect(&hhh,SIGNAL(EditGoDustbin(QString)), &dustbin,SLOT(DustbinShow(QString)));

    QObject::connect(&con,SIGNAL(ContactGoLogin()),&login,SLOT(LoginShow()));
    QObject::connect(&con,SIGNAL(ContactGoEdit(QString)),&hhh,SLOT(EditShow(QString)));
    QObject::connect(&con,SIGNAL(ContactGoInbox(QString)),&inbox,SLOT(InboxShow(QString)));
    QObject::connect(&con,SIGNAL(ContactGoSend(QString)), &send,SLOT(SendShow(QString)));
    QObject::connect(&con,SIGNAL(ContactGoDrafts(QString)), &drafts,SLOT(DraftsShow(QString)));
    QObject::connect(&con,SIGNAL(ContactGoDustbin(QString)), &dustbin,SLOT(DustbinShow(QString)));

    QObject::connect(&send,SIGNAL(SendGoInbox(QString)),&inbox,SLOT(InboxShow(QString)));
    QObject::connect(&send,SIGNAL(SendGoContact(QString)),&con,SLOT(ContactShow(QString)));
    QObject::connect(&send,SIGNAL(SendGoLogin()),&login,SLOT(LoginShow()));
    QObject::connect(&send,SIGNAL(SendGoEdit(QString)),&hhh,SLOT(EditShow(QString)));
    QObject::connect(&send,SIGNAL(SendGoDrafts(QString)), &drafts,SLOT(DraftsShow(QString)));
    QObject::connect(&send,SIGNAL(SendGoDustbin(QString)), &dustbin,SLOT(DustbinShow(QString)));

    QObject::connect(&drafts,SIGNAL(DraftsGoInbox(QString)),&inbox,SLOT(InboxShow(QString)));
    QObject::connect(&drafts,SIGNAL(DraftsGoContact(QString)),&con,SLOT(ContactShow(QString)));
    QObject::connect(&drafts,SIGNAL(DraftsGoLogin()),&login,SLOT(LoginShow()));
    QObject::connect(&drafts,SIGNAL(DraftsGoEdit(QString)),&hhh,SLOT(EditShow(QString)));
    QObject::connect(&drafts,SIGNAL(DraftsGoSend(QString)), &send,SLOT(SendShow(QString)));
    QObject::connect(&drafts,SIGNAL(DraftsGoDustbin(QString)), &dustbin,SLOT(DustbinShow(QString)));

    QObject::connect(&dustbin,SIGNAL(DustbinGoInbox(QString)),&inbox,SLOT(InboxShow(QString)));
    QObject::connect(&dustbin,SIGNAL(DustbinGoContact(QString)),&con,SLOT(ContactShow(QString)));
    QObject::connect(&dustbin,SIGNAL(DustbinGoLogin()),&login,SLOT(LoginShow()));
    QObject::connect(&dustbin,SIGNAL(DustbinGoEdit(QString)),&hhh,SLOT(EditShow(QString)));
    QObject::connect(&dustbin,SIGNAL(DustbinGoSend(QString)), &send,SLOT(SendShow(QString)));
    QObject::connect(&dustbin,SIGNAL(DustbinGoDrafts(QString)), &drafts,SLOT(DraftsShow(QString)));

    return a.exec();
}
