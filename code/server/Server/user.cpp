#include "user.h"

User::User(QString username, QString password)
    : _username(username), _password(password)
{
}

QString User::GetUsername() const
{
    return _username;
}

QString User::GetPassword() const
{
    return _password;
}
