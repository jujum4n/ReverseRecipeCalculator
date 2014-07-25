//By: Justin Chase
//CSCI 430 : Group 1

#include "dialogimpl.h"
#include <QDialog>
#include "ui_dialog.h"
#include <QMessageBox>
#include <QtSql>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

DialogImpl::DialogImpl( QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
{
	//Setup gui
	setupUi(this);
	
	//connect the buttons to the functions when clicked
	connect(savrecPbtn, SIGNAL(clicked()), this, SLOT(addRec()));
	connect(exitPbtn, SIGNAL(clicked()), this, SLOT(doneClicked()));
	connect(previewbtn, SIGNAL(clicked()), this, SLOT(previewRec()));
	connect(clearbtn, SIGNAL(clicked()), this, SLOT(clearFields()));
	
	//Login to the SQL Database
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("chromatichulk.com");
    db.setDatabaseName("chromatichulk_program");
    db.setUserName("jchase");
    db.setPassword("Jpc315");
    db.open();
    
	// Set the max values of the spinners
	calSpin->setMaximum(24000); // Calories
	servSpin->setMaximum(200); // Number of servings
	chrs->setMaximum(512); // Maximum number of cooktime hours
	phrs->setMaximum(512); // Maximum number of preptime hours
	cmins->setMaximum(59); // (Cant be longer than 59 mins)
	pmins->setMaximum(59);
}
void DialogImpl::addRec()
//Pre: There is data entered in the fields constructed by the DialogImpl
//Post: Takes in the data entered in the fields constructed by the DialogImpl and saves them off to MYSQL Recipes Table at the end
{
		if(titleEdit->text()=="")
		{
			QMessageBox::warning(this, "Failure to Save Recipe",
    		"Please enter in atleast the title of the recipe inorder to save.\n" 
    	);
		}
		else
		{
			//Get the recipes name
			string fname;
			QString qtitle=titleEdit->text(); // Takes the current text held by the "Title box"
			fname=qtitle.toStdString(); // Convert the qstring "current title" to std::string
		
			//Get the recipes description
			string description;
			QString qdesc=descEdit->text(); // Take the current text held by the description box
			description=qdesc.toStdString();
		
			//Gets the ingredients as a single string
			string ingredients;
			QString qingred=ingredEdit->toPlainText(); //* *
			ingredients=qingred.toStdString();
			
			//Gets the directions as a single string
			string directions;
			QString qdirect=directEdit->toPlainText(); // * *
			directions=qdirect.toStdString();
		
			double preptime,cooktime, calories, number_of_servings;
		
			//Gets the number of calories and number of servings
			calories=calSpin->value(); // Take the value from the calorie double num spin box
			number_of_servings=servSpin->value(); // Take the value from the number of servings double num spin box
			
			// convert the hours to minutes and add them to the minutes
			preptime=(phrs->value()*60) + pmins->value();
			cooktime=(chrs->value()*60) + cmins->value();
			QSqlQuery query;
			
			//Insert Values into the recipes table
     		query.prepare("INSERT INTO Recipes(title, author, description, prepTime, cookTime, readyIn, calories, directions, serves) "
                   	      "VALUES (:title, :author, :description, :prepTime, :cookTime, :readyIn, :calories, :directions, :serves)");
     		query.bindValue(":title", qtitle);
     		query.bindValue(":author", "Justin Chase");
     		query.bindValue(":description", qdesc);
     		query.bindValue(":prepTime", preptime);
     		query.bindValue(":cookTime", cooktime);
     		query.bindValue(":readyIn", preptime+cooktime);
     		query.bindValue(":calories", calories);
     		query.bindValue(":directions", qdirect);
     		query.bindValue(":serves", number_of_servings);
     		query.exec();

			//need to add recipe ingredients to database here.
		
		/* int last_insert = QSqlQuery::lastInsertId();
		istringstream iss(ingredients, istringstream::in);
		// Split string & parse to get values
		char tmpchar;
		vector<ingredient> in_ingred;
		while(iss.peek() != string::npos)
		{
			while(iss.get(tmpchar) && tmpchar !='\n')
			{
				int quant;
				string type;
				string ingredient;
				iss >> quant >> type; 
				iss.getline(ingredient);	
			}
			ingredient temp(quant,type,ingredient);
			iss.get();
		}
		
		foreach ingredient i in in_ingred /// lol pseudocode, we need a structure of the ingredients that we can iterate through and insert each into the database..  
		{
			query.prepare("INSERT INTO RecipeIngredient(RecipeID, title, quantity, unit, extraDir) VALUES(:Rec_ID, ingr_title, quant, units)");
			query.bindValue(":Rec_ID",last_insert);
			query.bindValue(":Ingr_title",i.ingredient);
			query.bindValue(":quant",i.quantity);
			query.bindValue(":units",i.type);
			query.exec();
		}
		*/
	}
}	
void DialogImpl::clearFields()
//Pre: The fields of the constructed DialogImpl (Addrecipe dialog) contain fields that wish to be cleared
//Post: All fields of the constructed DialogImpl (Addrecipe dialog) are cleared to nothing
{
	directEdit->clear();
	ingredEdit->clear();
	descEdit->clear();
	titleEdit->clear();
	calSpin->clear();
	servSpin->clear();
	chrs->clear();
	phrs->clear();
	cmins->clear();
	pmins->clear();
}
void DialogImpl::previewRec()
//Pre: There is data entered in the fields constructed by the DialogImpl
//Post: Takes in the data entered in the fields constructed by the DialogImpl and prints them out to a QMessageBox
{
	if(titleEdit->text()!="") // If the title isn't empty
	{
		double preptime, cooktime;
		preptime=(phrs->value()*60) + pmins->value();
		cooktime=(chrs->value()*60) + cmins->value();
		
    	QMessageBox::about(this, "Preview Recipe:",
    	+"Title: " + titleEdit->text() + "\n"
    	+"Description: " + descEdit->text() + "\n"
    	+ "Ingredients: \n" + ingredEdit->toPlainText() + "\n"
    	+ "Directions: \n" + directEdit->toPlainText() + "\n"
    	+ "Number of Servings: " + QString::number(servSpin->value()) + "\n"
		+ "Prep-Time: " + QString::number(preptime) + "\n"
		+ "Cook-Time: " + QString::number(cooktime) + "\n"
		+ "Ready-Time: " + QString::number(preptime + cooktime) + "\n"
		+ "Calories: " + QString::number(calSpin->value()) + "\n"
    	);
   	}
   	else // Pop up this warning dialog
   	{
   		QMessageBox::warning(this, "Failure to Preview Recipe",
    	"Please enter in atleast the title of the recipe to preview.\n" 
    	);
   	}
}
void DialogImpl::doneClicked()
//Post: Exits the dialog
{
	this->close();
}
//
