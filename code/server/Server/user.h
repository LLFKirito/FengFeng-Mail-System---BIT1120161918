#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    User(QString, QString);

    QString GetUsername() const;
    QString GetPassword() const;

private:
    QString _username;
    QString _password;
};

#endif // USER_H
