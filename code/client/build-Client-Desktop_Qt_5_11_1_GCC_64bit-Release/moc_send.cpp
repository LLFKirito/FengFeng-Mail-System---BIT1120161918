/****************************************************************************
** Meta object code from reading C++ file 'send.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Client/send.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'send.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Send_t {
    QByteArrayData data[26];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Send_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Send_t qt_meta_stringdata_Send = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Send"
QT_MOC_LITERAL(1, 5, 13), // "SendGoManager"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "SendGoLogin"
QT_MOC_LITERAL(4, 32, 13), // "SendGoContact"
QT_MOC_LITERAL(5, 46, 12), // "SendGoDrafts"
QT_MOC_LITERAL(6, 59, 13), // "SendGoDustbin"
QT_MOC_LITERAL(7, 73, 11), // "SendGoInbox"
QT_MOC_LITERAL(8, 85, 10), // "SendGoEdit"
QT_MOC_LITERAL(9, 96, 17), // "on_Logout_clicked"
QT_MOC_LITERAL(10, 114, 18), // "on_Logout_released"
QT_MOC_LITERAL(11, 133, 16), // "on_Help_released"
QT_MOC_LITERAL(12, 150, 15), // "on_Help_clicked"
QT_MOC_LITERAL(13, 166, 16), // "on_Write_clicked"
QT_MOC_LITERAL(14, 183, 17), // "on_Write_released"
QT_MOC_LITERAL(15, 201, 18), // "on_Inbox_2_clicked"
QT_MOC_LITERAL(16, 220, 19), // "on_Inbox_2_released"
QT_MOC_LITERAL(17, 240, 18), // "on_Contact_clicked"
QT_MOC_LITERAL(18, 259, 19), // "on_Contact_released"
QT_MOC_LITERAL(19, 279, 17), // "on_Send_2_clicked"
QT_MOC_LITERAL(20, 297, 18), // "on_Send_2_released"
QT_MOC_LITERAL(21, 316, 17), // "on_Drafts_clicked"
QT_MOC_LITERAL(22, 334, 18), // "on_Drafts_released"
QT_MOC_LITERAL(23, 353, 18), // "on_Dustbin_clicked"
QT_MOC_LITERAL(24, 372, 19), // "on_Dustbin_released"
QT_MOC_LITERAL(25, 392, 8) // "SendShow"

    },
    "Send\0SendGoManager\0\0SendGoLogin\0"
    "SendGoContact\0SendGoDrafts\0SendGoDustbin\0"
    "SendGoInbox\0SendGoEdit\0on_Logout_clicked\0"
    "on_Logout_released\0on_Help_released\0"
    "on_Help_clicked\0on_Write_clicked\0"
    "on_Write_released\0on_Inbox_2_clicked\0"
    "on_Inbox_2_released\0on_Contact_clicked\0"
    "on_Contact_released\0on_Send_2_clicked\0"
    "on_Send_2_released\0on_Drafts_clicked\0"
    "on_Drafts_released\0on_Dustbin_clicked\0"
    "on_Dustbin_released\0SendShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Send[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       3,    0,  137,    2, 0x06 /* Public */,
       4,    1,  138,    2, 0x06 /* Public */,
       5,    1,  141,    2, 0x06 /* Public */,
       6,    1,  144,    2, 0x06 /* Public */,
       7,    1,  147,    2, 0x06 /* Public */,
       8,    1,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  153,    2, 0x08 /* Private */,
      10,    0,  154,    2, 0x08 /* Private */,
      11,    0,  155,    2, 0x08 /* Private */,
      12,    0,  156,    2, 0x08 /* Private */,
      13,    0,  157,    2, 0x08 /* Private */,
      14,    0,  158,    2, 0x08 /* Private */,
      15,    0,  159,    2, 0x08 /* Private */,
      16,    0,  160,    2, 0x08 /* Private */,
      17,    0,  161,    2, 0x08 /* Private */,
      18,    0,  162,    2, 0x08 /* Private */,
      19,    0,  163,    2, 0x08 /* Private */,
      20,    0,  164,    2, 0x08 /* Private */,
      21,    0,  165,    2, 0x08 /* Private */,
      22,    0,  166,    2, 0x08 /* Private */,
      23,    0,  167,    2, 0x08 /* Private */,
      24,    0,  168,    2, 0x08 /* Private */,
      25,    1,  169,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Send::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Send *_t = static_cast<Send *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendGoManager((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SendGoLogin(); break;
        case 2: _t->SendGoContact((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SendGoDrafts((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SendGoDustbin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SendGoInbox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->SendGoEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_Logout_clicked(); break;
        case 8: _t->on_Logout_released(); break;
        case 9: _t->on_Help_released(); break;
        case 10: _t->on_Help_clicked(); break;
        case 11: _t->on_Write_clicked(); break;
        case 12: _t->on_Write_released(); break;
        case 13: _t->on_Inbox_2_clicked(); break;
        case 14: _t->on_Inbox_2_released(); break;
        case 15: _t->on_Contact_clicked(); break;
        case 16: _t->on_Contact_released(); break;
        case 17: _t->on_Send_2_clicked(); break;
        case 18: _t->on_Send_2_released(); break;
        case 19: _t->on_Drafts_clicked(); break;
        case 20: _t->on_Drafts_released(); break;
        case 21: _t->on_Dustbin_clicked(); break;
        case 22: _t->on_Dustbin_released(); break;
        case 23: _t->SendShow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Send::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Send::SendGoManager)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Send::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Send::SendGoLogin)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Send::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Send::SendGoContact)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Send::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Send::SendGoDrafts)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Send::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Send::SendGoDustbin)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Send::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Send::SendGoInbox)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Send::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Send::SendGoEdit)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Send::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Send.data,
      qt_meta_data_Send,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Send::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Send::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Send.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Send::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void Send::SendGoManager(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Send::SendGoLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Send::SendGoContact(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Send::SendGoDrafts(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Send::SendGoDustbin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Send::SendGoInbox(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Send::SendGoEdit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
