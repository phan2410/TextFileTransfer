/****************************************************************************
** Meta object code from reading C++ file 'canbusworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CanBusWorker/canbusworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canbusworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CanBusWorker_t {
    QByteArrayData data[7];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanBusWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanBusWorker_t qt_meta_stringdata_CanBusWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CanBusWorker"
QT_MOC_LITERAL(1, 13, 3), // "Out"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "QVariant*"
QT_MOC_LITERAL(4, 28, 2), // "In"
QT_MOC_LITERAL(5, 31, 7), // "enumVar"
QT_MOC_LITERAL(6, 39, 7) // "dataVar"

    },
    "CanBusWorker\0Out\0\0QVariant*\0In\0enumVar\0"
    "dataVar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanBusWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       1,    1,   39,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   42,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    5,    6,
    QMetaType::Void, 0x80000000 | 3,    5,

       0        // eod
};

void CanBusWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanBusWorker *_t = static_cast<CanBusWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Out((*reinterpret_cast< QVariant*(*)>(_a[1])),(*reinterpret_cast< QVariant*(*)>(_a[2]))); break;
        case 1: _t->Out((*reinterpret_cast< QVariant*(*)>(_a[1]))); break;
        case 2: _t->In((*reinterpret_cast< QVariant*(*)>(_a[1])),(*reinterpret_cast< QVariant*(*)>(_a[2]))); break;
        case 3: _t->In((*reinterpret_cast< QVariant*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CanBusWorker::*_t)(QVariant * , QVariant * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CanBusWorker::Out)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CanBusWorker::staticMetaObject = {
    { &QStateMachine::staticMetaObject, qt_meta_stringdata_CanBusWorker.data,
      qt_meta_data_CanBusWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CanBusWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanBusWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CanBusWorker.stringdata0))
        return static_cast<void*>(const_cast< CanBusWorker*>(this));
    return QStateMachine::qt_metacast(_clname);
}

int CanBusWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStateMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CanBusWorker::Out(QVariant * _t1, QVariant * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
