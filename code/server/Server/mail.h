#ifndef MAIL_H
#define MAIL_H

#include <QString>
#include <cstdint>

class Mail
{
public:
    Mail(uint32_t, uint32_t, QString, QString);

    uint32_t GetSendUserId() const;
    uint32_t GetReceiveUserId() const;
    QString GetTheme() const;
    QString GetText() const;

private:
    uint32_t _sendUserId;
    uint32_t _receiveUserId;
    QString _theme;
    QString _content;
};

#endif // MAIL_H
