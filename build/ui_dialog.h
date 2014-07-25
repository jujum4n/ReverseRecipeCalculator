/********************************************************************************
** Form generated from reading ui file 'dialog.ui'
**
** Created: Thu Dec 3 00:43:25 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addRecipe
{
public:
    QGridLayout *gridLayout;
    QLabel *Title;
    QLineEdit *titleEdit;
    QLabel *Description;
    QLineEdit *descEdit;
    QLabel *Ingredients;
    QTextEdit *ingredEdit;
    QLabel *Directions;
    QTextEdit *directEdit;
    QLabel *calories;
    QSpinBox *calSpin;
    QLabel *cookTime_2;
    QSpinBox *servSpin;
    QPushButton *clearbtn;
    QPushButton *previewbtn;
    QLabel *prepTime;
    QSpinBox *phrs;
    QLabel *label_3;
    QSpinBox *pmins;
    QLabel *label_5;
    QPushButton *savrecPbtn;
    QPushButton *exitPbtn;
    QLabel *cookTime;
    QSpinBox *chrs;
    QLabel *label_4;
    QSpinBox *cmins;
    QLabel *label_6;

    void setupUi(QDialog *addRecipe)
    {
        if (addRecipe->objectName().isEmpty())
            addRecipe->setObjectName(QString::fromUtf8("addRecipe"));
        addRecipe->resize(484, 607);
        addRecipe->setMinimumSize(QSize(484, 411));
        gridLayout = new QGridLayout(addRecipe);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Title = new QLabel(addRecipe);
        Title->setObjectName(QString::fromUtf8("Title"));

        gridLayout->addWidget(Title, 0, 0, 1, 1);

        titleEdit = new QLineEdit(addRecipe);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        gridLayout->addWidget(titleEdit, 0, 1, 1, 8);

        Description = new QLabel(addRecipe);
        Description->setObjectName(QString::fromUtf8("Description"));

        gridLayout->addWidget(Description, 1, 0, 1, 3);

        descEdit = new QLineEdit(addRecipe);
        descEdit->setObjectName(QString::fromUtf8("descEdit"));

        gridLayout->addWidget(descEdit, 1, 3, 1, 6);

        Ingredients = new QLabel(addRecipe);
        Ingredients->setObjectName(QString::fromUtf8("Ingredients"));

        gridLayout->addWidget(Ingredients, 2, 0, 1, 4);

        ingredEdit = new QTextEdit(addRecipe);
        ingredEdit->setObjectName(QString::fromUtf8("ingredEdit"));

        gridLayout->addWidget(ingredEdit, 3, 0, 1, 9);

        Directions = new QLabel(addRecipe);
        Directions->setObjectName(QString::fromUtf8("Directions"));

        gridLayout->addWidget(Directions, 4, 0, 1, 4);

        directEdit = new QTextEdit(addRecipe);
        directEdit->setObjectName(QString::fromUtf8("directEdit"));

        gridLayout->addWidget(directEdit, 5, 0, 1, 9);

        calories = new QLabel(addRecipe);
        calories->setObjectName(QString::fromUtf8("calories"));

        gridLayout->addWidget(calories, 6, 0, 1, 2);

        calSpin = new QSpinBox(addRecipe);
        calSpin->setObjectName(QString::fromUtf8("calSpin"));

        gridLayout->addWidget(calSpin, 6, 2, 1, 2);

        cookTime_2 = new QLabel(addRecipe);
        cookTime_2->setObjectName(QString::fromUtf8("cookTime_2"));

        gridLayout->addWidget(cookTime_2, 6, 4, 1, 2);

        servSpin = new QSpinBox(addRecipe);
        servSpin->setObjectName(QString::fromUtf8("servSpin"));

        gridLayout->addWidget(servSpin, 6, 6, 1, 1);

        clearbtn = new QPushButton(addRecipe);
        clearbtn->setObjectName(QString::fromUtf8("clearbtn"));

        gridLayout->addWidget(clearbtn, 6, 7, 1, 1);

        previewbtn = new QPushButton(addRecipe);
        previewbtn->setObjectName(QString::fromUtf8("previewbtn"));

        gridLayout->addWidget(previewbtn, 6, 8, 1, 1);

        prepTime = new QLabel(addRecipe);
        prepTime->setObjectName(QString::fromUtf8("prepTime"));

        gridLayout->addWidget(prepTime, 7, 0, 1, 2);

        phrs = new QSpinBox(addRecipe);
        phrs->setObjectName(QString::fromUtf8("phrs"));

        gridLayout->addWidget(phrs, 7, 3, 2, 1);

        label_3 = new QLabel(addRecipe);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 4, 1, 1);

        pmins = new QSpinBox(addRecipe);
        pmins->setObjectName(QString::fromUtf8("pmins"));

        gridLayout->addWidget(pmins, 7, 5, 2, 1);

        label_5 = new QLabel(addRecipe);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 6, 1, 1);

        savrecPbtn = new QPushButton(addRecipe);
        savrecPbtn->setObjectName(QString::fromUtf8("savrecPbtn"));

        gridLayout->addWidget(savrecPbtn, 8, 7, 2, 1);

        exitPbtn = new QPushButton(addRecipe);
        exitPbtn->setObjectName(QString::fromUtf8("exitPbtn"));
        exitPbtn->setAutoFillBackground(false);

        gridLayout->addWidget(exitPbtn, 8, 8, 2, 1);

        cookTime = new QLabel(addRecipe);
        cookTime->setObjectName(QString::fromUtf8("cookTime"));

        gridLayout->addWidget(cookTime, 9, 0, 1, 2);

        chrs = new QSpinBox(addRecipe);
        chrs->setObjectName(QString::fromUtf8("chrs"));

        gridLayout->addWidget(chrs, 9, 3, 1, 1);

        label_4 = new QLabel(addRecipe);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 9, 4, 1, 1);

        cmins = new QSpinBox(addRecipe);
        cmins->setObjectName(QString::fromUtf8("cmins"));

        gridLayout->addWidget(cmins, 9, 5, 1, 1);

        label_6 = new QLabel(addRecipe);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 9, 6, 1, 1);


        retranslateUi(addRecipe);

        QMetaObject::connectSlotsByName(addRecipe);
    } // setupUi

    void retranslateUi(QDialog *addRecipe)
    {
        addRecipe->setWindowTitle(QApplication::translate("addRecipe", "Add Recipe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addRecipe->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Title->setText(QApplication::translate("addRecipe", "Title:", 0, QApplication::UnicodeUTF8));
        Description->setText(QApplication::translate("addRecipe", "Description:", 0, QApplication::UnicodeUTF8));
        Ingredients->setText(QApplication::translate("addRecipe", "Ingredients:", 0, QApplication::UnicodeUTF8));
        ingredEdit->setHtml(QApplication::translate("addRecipe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Example: 1/4 Cups of Chopped Almonds (one per line) Delete me or Clear All Fields!</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Directions->setToolTip(QApplication::translate("addRecipe", "Ex. (Pre-Heat oven to 375 degrees) one per line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Directions->setText(QApplication::translate("addRecipe", "Directions:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        directEdit->setToolTip(QApplication::translate("addRecipe", "Ex. (Pre-Heat oven to 375 degrees) one per line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        directEdit->setHtml(QApplication::translate("addRecipe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Example: 1. Pre-Heat oven to 375 degrees. (one per line) Delete me or Clear All Fields!</p></body></html>", 0, QApplication::UnicodeUTF8));
        calories->setText(QApplication::translate("addRecipe", "Calories:", 0, QApplication::UnicodeUTF8));
        cookTime_2->setText(QApplication::translate("addRecipe", "Servings:", 0, QApplication::UnicodeUTF8));
        clearbtn->setText(QApplication::translate("addRecipe", "&Clear", 0, QApplication::UnicodeUTF8));
        previewbtn->setText(QApplication::translate("addRecipe", "&Preview", 0, QApplication::UnicodeUTF8));
        prepTime->setText(QApplication::translate("addRecipe", "Prep Time:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addRecipe", "hrs", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addRecipe", "mins", 0, QApplication::UnicodeUTF8));
        savrecPbtn->setText(QApplication::translate("addRecipe", "&Save", 0, QApplication::UnicodeUTF8));
        exitPbtn->setText(QApplication::translate("addRecipe", "Cl&ose", 0, QApplication::UnicodeUTF8));
        cookTime->setText(QApplication::translate("addRecipe", "Cook Time:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addRecipe", "hrs", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("addRecipe", "mins", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(addRecipe);
    } // retranslateUi

};

namespace Ui {
    class addRecipe: public Ui_addRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
