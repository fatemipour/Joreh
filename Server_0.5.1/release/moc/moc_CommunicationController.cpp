/****************************************************************************
** Meta object code from reading C++ file 'CommunicationController.h'
**
** Created: Mon Nov 14 14:15:08 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommunicationController/CommunicationController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommunicationController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommunicationController[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   25,   24,   24, 0x05,
      73,   68,   24,   24, 0x05,
      95,   68,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CommunicationController[] = {
    "CommunicationController\0\0indx,msg\0"
    "messageReceived(uint,std::string)\0"
    "indx\0clientConnected(uint)\0"
    "clientDisconnected(uint)\0"
};

const QMetaObject CommunicationController::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_CommunicationController,
      qt_meta_data_CommunicationController, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CommunicationController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CommunicationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CommunicationController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommunicationController))
        return static_cast<void*>(const_cast< CommunicationController*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int CommunicationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageReceived((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 1: clientConnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: clientDisconnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CommunicationController::messageReceived(unsigned  _t1, std::string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommunicationController::clientConnected(unsigned  _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommunicationController::clientDisconnected(unsigned  _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
