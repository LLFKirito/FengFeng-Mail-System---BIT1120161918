#ifndef DATABASE_H
#define DATABASE_H

#include "user.h"
#include "mail.h"

#include <cstdint>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <vector>

class Database
{
public:
    Database();

    bool AddUser(User);
    uint32_t FindUser(User) const;
    uint32_t GetUserId(QString) const;
    QString GetUsername(uint32_t) const;

    void AddMail(Mail);
    std::vector<Mail> GetMail(uint32_t) const;

private:
    QSqlDatabase _sqlDb;
};

#endif // DATABASE_H
