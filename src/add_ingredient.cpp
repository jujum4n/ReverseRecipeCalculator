//By: Justin Chase
//CSCI 430 : Group 1

#include "add_ingredient.h"
#include <vector>
#include <QMessageBox>

#include "ui_mainwindow.h"
#include "ingredient.h"
#include "mainwindowimpl.h"
#include "dialogimpl.h"
using namespace std;
//
add_ingredient::add_ingredient( QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
{
	setupUi(this);
	connect(previewBtn, SIGNAL(clicked()), this, SLOT(previewIngred()));
	connect(clearBtn, SIGNAL(clicked()), this, SLOT(clearFields()));
	connect(saveBtn, SIGNAL(clicked()), this, SLOT(saveIngred()));
	connect(doneBtn, SIGNAL(clicked()), this, SLOT(doneClicked()));
	//Set the max values of the spinners
	quanSpin->setMaximum(1024);
}
void add_ingredient::clearFields()
{
	descEdit->clear();
	quanSpin->clear();
}
void add_ingredient::previewIngred()
{
		if(descEdit->text()!="")
		{
	   		QMessageBox::about(this, "Preview Ingredient",
    		QString::number(quanSpin->value()) + " " + myCombo->currentText() + " " + descEdit->text() + "\n"
    		);
   		}
   		else
   		{
   			
   		   	QMessageBox::warning(this, "Failure to Preview Ingredient",
    		"Please enter in atleast the description of the ingredient.\n" 
    		);
  		}
}
//void add_ingredient::load_users_ingredient_list(vector <ingredient> users_ingredients)
//{
//	
//}
void add_ingredient::doneClicked()
{
	this->close();
}
void add_ingredient::saveIngred()
{
		if(descEdit->text()!="" /* And the ingredient isint in the users->current_item_list*/)
		{
    		QString append;
    		append = QString::number(quanSpin->value()) + " " + myCombo->currentText() + " " + descEdit->text();
    		//list_Inv->addItem(append);
   		}
   		else
   		{
   			
   		   	QMessageBox::warning(this, "Failure to Save Ingredient",
    		"Please enter in atleast the description of the ingredient.\n" 
    		);
  		}
	//if the ingredient is already in the users database notify with dialog and ask if they want to append or not
}
//
