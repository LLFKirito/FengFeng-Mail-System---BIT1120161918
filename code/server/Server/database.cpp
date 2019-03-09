#include "database.h"

#include <QtDebug>
#include <QSqlError>

Database::Database()
{
    if (QSqlDatabase::contains("MailSystemDatabase"))
        _sqlDb = QSqlDatabase::database("MailSystemDatabase");
    else
    {
        _sqlDb = QSqlDatabase::addDatabase("QSQLITE", "MailSystemDatabase");
        _sqlDb.setDatabaseName("MailSystemDatabase.db");
        _sqlDb.setUserName("admin");
        _sqlDb.setPassword("admin");
    }
    if (!_sqlDb.open())
        qDebug() << _sqlDb.lastError();
    else
    {
        QSqlQuery query(_sqlDb);
        query.exec("drop table UserInfo");
        query.exec("create table if not exists UserInfo("
                   "userId integer primary key autoincrement,"
                   "username text,"
                   "password text)");
        query.exec("drop table Mail");
        query.exec("create table if not exists Mail("
                   "mailId integer primary key autoincrement,"
                   "sendUserId integer,"
                   "receiveUserId integer,"
                   "theme text,"
                   "content text)");
    }
}

bool Database::AddUser(User user)
{
    QSqlQuery query(_sqlDb);
    query.prepare("select username from UserInfo where username = :name");
    query.bindValue(":name", user.GetUsername());
    query.exec();
    if (query.next()) return false;
    query.prepare("insert into UserInfo values(null, :username, :password)");
    query.bindValue(":username", user.GetUsername());
    query.bindValue(":password", user.GetPassword());
    query.exec();
    return true;;
}

uint32_t Database::FindUser(User user) const
{
    QSqlQuery query(_sqlDb);
    query.prepare("select userId from UserInfo where username = :name and password = :pw");
    query.bindValue(":name", user.GetUsername());
    query.bindValue(":pw", user.GetPassword());
    query.exec();
    if (!query.next()) return 0;
    return query.value(0).toInt();
}

uint32_t Database::GetUserId(QString username) const
{
    QSqlQuery query(_sqlDb);
    query.prepare("select userId from UserInfo where username = :name");
    query.bindValue(":name", username);
    query.exec();
    if (!query.next()) return 0;
    return query.value(0).toInt();
}

QString Database::GetUsername(uint32_t userId) const
{
    QSqlQuery query(_sqlDb);
    query.prepare("select username from UserInfo where userId = :Id");
    query.bindValue(":Id", userId);
    query.exec();
    if (!query.next()) return "";
    return query.value(0).toString();
}

void Database::AddMail(Mail mail)
{
    QSqlQuery query(_sqlDb);
    query.prepare("insert into Mail values(null, :send, :rec, :theme, :content)");
    query.bindValue(":send", mail.GetSendUserId());
    query.bindValue(":rec", mail.GetReceiveUserId());
    query.bindValue(":theme", mail.GetTheme());
    query.bindValue(":content", mail.GetText());
    query.exec();
}

std::vector<Mail> Database::GetMail(uint32_t recId) const
{
    std::vector<Mail> mails;
    QSqlQuery query(_sqlDb);
    query.prepare("select * from Mail where receiveUserId = :recId");
    query.bindValue(":recId", recId);
    query.exec();
    while (query.next())
    {
        uint32_t sendId = query.value(1).toInt();
        QString theme = query.value(3).toString();
        QString content = query.value(4).toString();
        mails.emplace_back(sendId, recId, theme, content);
    }
    return mails;
}
