/****************************************************************************
** Meta object code from reading C++ file 'ClientSocket.h'
**
** Created: Mon Nov 14 14:15:11 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommunicationController/Tcp/ClientSocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClientSocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientSocket[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   14,   13,   13, 0x05,
      62,   57,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   13,   13,   13, 0x08,
     100,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ClientSocket[] = {
    "ClientSocket\0\0indx,msg\0"
    "messageReceived(uint,std::string)\0"
    "indx\0clientDisconnected(uint)\0"
    "readClient()\0disconnectedClient()\0"
};

const QMetaObject ClientSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_ClientSocket,
      qt_meta_data_ClientSocket, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSocket))
        return static_cast<void*>(const_cast< ClientSocket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int ClientSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageReceived((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 1: clientDisconnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: readClient(); break;
        case 3: disconnectedClient(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ClientSocket::messageReceived(unsigned  _t1, std::string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientSocket::clientDisconnected(unsigned  _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
