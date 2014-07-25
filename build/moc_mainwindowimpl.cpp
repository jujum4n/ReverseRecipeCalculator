/****************************************************************************
** Meta object code from reading C++ file 'mainwindowimpl.h'
**
** Created: Thu Dec 3 00:43:44 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindowimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowImpl[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      29,   15,   15,   15, 0x08,
      39,   15,   15,   15, 0x08,
      46,   15,   15,   15, 0x08,
      55,   15,   15,   15, 0x08,
      66,   15,   15,   15, 0x08,
      94,   83,   76,   15, 0x08,
     118,   15,  114,   15, 0x08,
     151,   15,   15,   15, 0x08,
     167,   15,   15,   15, 0x08,
     183,   15,   15,   15, 0x08,
     196,   15,   15,   15, 0x08,
     210,   15,   15,   15, 0x08,
     227,   15,   15,   15, 0x08,
     245,   15,   15,   15, 0x08,
     255,   15,   15,   15, 0x08,
     278,   15,   15,   15, 0x08,
     293,   15,   15,   15, 0x08,
     348,  322,  307,   15, 0x08,
     425,  395,  307,   15, 0x08,
     497,  473,  307,   15, 0x08,
     566,  542,  307,   15, 0x08,
     611,  322,  307,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowImpl[] = {
    "MainWindowImpl\0\0terminated()\0add_rec()\0"
    "info()\0conver()\0not_done()\0add_ing()\0"
    "string\0to_convert\0toLowerCase(string)\0"
    "int\0populate_users_ingredient_list()\0"
    "apply_filters()\0previewIngred()\0"
    "saveIngred()\0clearFields()\0removeSelected()\0"
    "previewSelected()\0saveInv()\0"
    "populate_recipe_list()\0searchTitles()\0"
    "killFilters()\0vector<recipe>\0"
    "difficulty,to_be_filtered\0"
    "populate_recipe_difficulty(int,vector<recipe>)\0"
    "time_to_filter,to_be_filtered\0"
    "populate_recipe_time_filter(int,vector<recipe>)\0"
    "calories,to_be_filtered\0"
    "populate_recipe_calories(int,vector<recipe>)\0"
    "servings,to_be_filtered\0"
    "populate_recipe_servings(int,vector<recipe>)\0"
    "populate_recipe_difficulty(string,vector<recipe>)\0"
};

const QMetaObject MainWindowImpl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowImpl,
      qt_meta_data_MainWindowImpl, 0 }
};

const QMetaObject *MainWindowImpl::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindowImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowImpl))
        return static_cast<void*>(const_cast< MainWindowImpl*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindowImpl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: terminated(); break;
        case 1: add_rec(); break;
        case 2: info(); break;
        case 3: conver(); break;
        case 4: not_done(); break;
        case 5: add_ing(); break;
        case 6: { string _r = toLowerCase((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 7: { int _r = populate_users_ingredient_list();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: apply_filters(); break;
        case 9: previewIngred(); break;
        case 10: saveIngred(); break;
        case 11: clearFields(); break;
        case 12: removeSelected(); break;
        case 13: previewSelected(); break;
        case 14: saveInv(); break;
        case 15: populate_recipe_list(); break;
        case 16: searchTitles(); break;
        case 17: killFilters(); break;
        case 18: { vector<recipe> _r = populate_recipe_difficulty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< vector<recipe>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vector<recipe>*>(_a[0]) = _r; }  break;
        case 19: { vector<recipe> _r = populate_recipe_time_filter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< vector<recipe>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vector<recipe>*>(_a[0]) = _r; }  break;
        case 20: { vector<recipe> _r = populate_recipe_calories((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< vector<recipe>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vector<recipe>*>(_a[0]) = _r; }  break;
        case 21: { vector<recipe> _r = populate_recipe_servings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< vector<recipe>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vector<recipe>*>(_a[0]) = _r; }  break;
        case 22: { vector<recipe> _r = populate_recipe_difficulty((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< vector<recipe>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vector<recipe>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
