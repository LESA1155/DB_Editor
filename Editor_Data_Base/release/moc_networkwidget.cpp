/****************************************************************************
** Meta object code from reading C++ file 'networkwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../networkwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkWidget_t {
    QByteArrayData data[14];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkWidget_t qt_meta_stringdata_NetworkWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetworkWidget"
QT_MOC_LITERAL(1, 14, 20), // "testNetworkForDevice"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 2), // "id"
QT_MOC_LITERAL(4, 39, 20), // "deviceWithIdSelected"
QT_MOC_LITERAL(5, 60, 7), // "allocId"
QT_MOC_LITERAL(6, 68, 5), // "isHub"
QT_MOC_LITERAL(7, 74, 11), // "setGridStep"
QT_MOC_LITERAL(8, 86, 1), // "x"
QT_MOC_LITERAL(9, 88, 1), // "y"
QT_MOC_LITERAL(10, 90, 4), // "step"
QT_MOC_LITERAL(11, 95, 12), // "setGridStart"
QT_MOC_LITERAL(12, 108, 5), // "point"
QT_MOC_LITERAL(13, 114, 25) // "fillDevicesAndConnections"

    },
    "NetworkWidget\0testNetworkForDevice\0\0"
    "id\0deviceWithIdSelected\0allocId\0isHub\0"
    "setGridStep\0x\0y\0step\0setGridStart\0"
    "point\0fillDevicesAndConnections"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    2,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   57,    2, 0x0a /* Public */,
       7,    1,   62,    2, 0x0a /* Public */,
      11,    2,   65,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void,

       0        // eod
};

void NetworkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkWidget *_t = static_cast<NetworkWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testNetworkForDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deviceWithIdSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setGridStep((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setGridStep((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->setGridStart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setGridStart((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->fillDevicesAndConnections(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NetworkWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkWidget::testNetworkForDevice)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NetworkWidget::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkWidget::deviceWithIdSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject NetworkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetworkWidget.data,
      qt_meta_data_NetworkWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetworkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NetworkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void NetworkWidget::testNetworkForDevice(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkWidget::deviceWithIdSelected(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
