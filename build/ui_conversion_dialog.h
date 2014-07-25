/********************************************************************************
** Form generated from reading ui file 'conversion_dialog.ui'
**
** Created: Thu Nov 12 09:48:16 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CONVERSION_DIALOG_H
#define UI_CONVERSION_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_con
{
public:
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_con)
    {
        if (Dialog_con->objectName().isEmpty())
            Dialog_con->setObjectName(QString::fromUtf8("Dialog_con"));
        Dialog_con->resize(272, 188);
        lineEdit = new QLineEdit(Dialog_con);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 10, 71, 24));
        comboBox = new QComboBox(Dialog_con);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 10, 72, 23));
        listWidget = new QListWidget(Dialog_con);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 251, 101));
        label = new QLabel(Dialog_con);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 54, 18));
        pushButton = new QPushButton(Dialog_con);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 150, 75, 28));
        pushButton_2 = new QPushButton(Dialog_con);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 150, 75, 28));

        retranslateUi(Dialog_con);

        QMetaObject::connectSlotsByName(Dialog_con);
    } // setupUi

    void retranslateUi(QDialog *Dialog_con)
    {
        Dialog_con->setWindowTitle(QApplication::translate("Dialog_con", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_con", "Convert:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog_con", "Done", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog_con", "Convert", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dialog_con);
    } // retranslateUi

};

namespace Ui {
    class Dialog_con: public Ui_Dialog_con {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSION_DIALOG_H
