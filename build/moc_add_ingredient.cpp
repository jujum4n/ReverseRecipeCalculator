/****************************************************************************
** Meta object code from reading C++ file 'add_ingredient.h'
**
** Created: Thu Dec 3 00:43:52 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/add_ingredient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_ingredient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_add_ingredient[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      30,   15,   15,   15, 0x08,
      46,   15,   15,   15, 0x08,
      60,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_add_ingredient[] = {
    "add_ingredient\0\0clearFields()\0"
    "previewIngred()\0doneClicked()\0"
    "saveIngred()\0"
};

const QMetaObject add_ingredient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_add_ingredient,
      qt_meta_data_add_ingredient, 0 }
};

const QMetaObject *add_ingredient::metaObject() const
{
    return &staticMetaObject;
}

void *add_ingredient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_add_ingredient))
        return static_cast<void*>(const_cast< add_ingredient*>(this));
    if (!strcmp(_clname, "Ui::add_ingredient"))
        return static_cast< Ui::add_ingredient*>(const_cast< add_ingredient*>(this));
    return QDialog::qt_metacast(_clname);
}

int add_ingredient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clearFields(); break;
        case 1: previewIngred(); break;
        case 2: doneClicked(); break;
        case 3: saveIngred(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
