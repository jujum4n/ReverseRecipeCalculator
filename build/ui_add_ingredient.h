/********************************************************************************
** Form generated from reading ui file 'add_ingredient.ui'
**
** Created: Thu Dec 3 00:43:25 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADD_INGREDIENT_H
#define UI_ADD_INGREDIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_ingredient
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *descEdit;
    QLabel *label;
    QDoubleSpinBox *quanSpin;
    QPushButton *clearBtn;
    QPushButton *previewBtn;
    QLabel *label_2;
    QComboBox *myCombo;
    QPushButton *saveBtn;
    QPushButton *doneBtn;

    void setupUi(QDialog *add_ingredient)
    {
        if (add_ingredient->objectName().isEmpty())
            add_ingredient->setObjectName(QString::fromUtf8("add_ingredient"));
        add_ingredient->resize(344, 110);
        add_ingredient->setMinimumSize(QSize(344, 110));
        gridLayout = new QGridLayout(add_ingredient);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(add_ingredient);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        descEdit = new QLineEdit(add_ingredient);
        descEdit->setObjectName(QString::fromUtf8("descEdit"));

        gridLayout->addWidget(descEdit, 0, 2, 1, 4);

        label = new QLabel(add_ingredient);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        quanSpin = new QDoubleSpinBox(add_ingredient);
        quanSpin->setObjectName(QString::fromUtf8("quanSpin"));

        gridLayout->addWidget(quanSpin, 1, 2, 1, 1);

        clearBtn = new QPushButton(add_ingredient);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));

        gridLayout->addWidget(clearBtn, 1, 3, 1, 2);

        previewBtn = new QPushButton(add_ingredient);
        previewBtn->setObjectName(QString::fromUtf8("previewBtn"));

        gridLayout->addWidget(previewBtn, 1, 5, 1, 1);

        label_2 = new QLabel(add_ingredient);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        myCombo = new QComboBox(add_ingredient);
        myCombo->setObjectName(QString::fromUtf8("myCombo"));

        gridLayout->addWidget(myCombo, 2, 1, 1, 2);

        saveBtn = new QPushButton(add_ingredient);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));

        gridLayout->addWidget(saveBtn, 2, 3, 1, 1);

        doneBtn = new QPushButton(add_ingredient);
        doneBtn->setObjectName(QString::fromUtf8("doneBtn"));

        gridLayout->addWidget(doneBtn, 2, 4, 1, 2);


        retranslateUi(add_ingredient);

        QMetaObject::connectSlotsByName(add_ingredient);
    } // setupUi

    void retranslateUi(QDialog *add_ingredient)
    {
        add_ingredient->setWindowTitle(QApplication::translate("add_ingredient", "Add Ingredient", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("add_ingredient", "Description:", 0, QApplication::UnicodeUTF8));
        descEdit->setText(QString());
        label->setText(QApplication::translate("add_ingredient", "Quantity:", 0, QApplication::UnicodeUTF8));
        clearBtn->setText(QApplication::translate("add_ingredient", "&Clear Fields", 0, QApplication::UnicodeUTF8));
        previewBtn->setText(QApplication::translate("add_ingredient", "&Preview", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("add_ingredient", "Type:", 0, QApplication::UnicodeUTF8));
        myCombo->clear();
        myCombo->insertItems(0, QStringList()
         << QApplication::translate("add_ingredient", "Cups", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Fluid Ounces", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Ounces", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Grams", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Kilograms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Teaspoons", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Tablespoons", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Pints", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Liters", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("add_ingredient", "Mililiters", 0, QApplication::UnicodeUTF8)
        );
        saveBtn->setText(QApplication::translate("add_ingredient", "&Save", 0, QApplication::UnicodeUTF8));
        doneBtn->setText(QApplication::translate("add_ingredient", "&Done", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(add_ingredient);
    } // retranslateUi

};

namespace Ui {
    class add_ingredient: public Ui_add_ingredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_INGREDIENT_H
