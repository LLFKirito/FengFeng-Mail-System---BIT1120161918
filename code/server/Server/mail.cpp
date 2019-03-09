#include "mail.h"

Mail::Mail(uint32_t sendUserId, uint32_t receiveUserId, QString theme, QString content)
    : _sendUserId(sendUserId), _receiveUserId(receiveUserId), _theme(theme), _content(content)
{
}

uint32_t Mail::GetSendUserId() const
{
    return _sendUserId;
}

uint32_t Mail::GetReceiveUserId() const
{
    return _receiveUserId;
}

QString Mail::GetTheme() const
{
    return _theme;
}

QString Mail::GetText() const
{
    return _content;
}
