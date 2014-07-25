#include "mainwindowimpl.h"
#include "dialogimpl.h"
#include "utils.h"
#include "converimpl.h"
#include "add_ingredient.h"
#include <QListWidget>
#include <QPicture>
#include <QPaintDevice>
#include <QPainter>
#include <QProgressBar>
#include <QtSql>
#include <QMessageBox>
#include <QThread>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
{
	setupUi(this);

	//Exit through menu
	connect(exitbtn, SIGNAL(triggered()),this,SLOT(terminated()));
	//Quit the program bottom right button
	connect(qprogBtn, SIGNAL(clicked()),this,SLOT(terminated()));
	//Add recipe button
	connect(addRecBtn, SIGNAL(clicked()),this,SLOT(add_rec()));
	//Conversion button through menu
	connect(converbtn, SIGNAL(triggered()),this,SLOT(conver()));
	//About our program dialog
	connect(About,SIGNAL(triggered()),this,SLOT(info()));
	//Rate button
	connect(Ratebtn,SIGNAL(triggered()),this,SLOT(not_done()));
	//Add item to inventory button
	connect(addInvBtn,SIGNAL(clicked()),this,SLOT(saveIngred()));
	//Save inventory button
	connect(saveInvBtn, SIGNAL(clicked()), this, SLOT(saveInv()));
	//To the docs through the menu
	connect(action_Docs,SIGNAL(triggered()),this,SLOT(not_done()));
	//Apply filter button
	connect(applyFilterBtn, SIGNAL(clicked()), this, SLOT(apply_filters()));
	//Convert unit's button
	connect(btconvunits, SIGNAL(clicked()), this, SLOT(conver()));
	//Clear the ingredient fields
	connect(clearBtn, SIGNAL(clicked()), this, SLOT(clearFields()));
	//Preview Ingredient
	connect(previewBtn, SIGNAL(clicked()), this, SLOT(previewIngred()));
	//Remove selected ingredient
	connect(removeInvBtn, SIGNAL(clicked()), this, SLOT(removeSelected()));
	//Preview selected button
	connect(viewBtn, SIGNAL(clicked()), this, SLOT(previewSelected()));
	//clear filters button
	connect(removeFilterBtn, SIGNAL(clicked()), this, SLOT(killFilters()));
	//Search Button
	//connect(searchBtn, SIGNAL(clicked()), this, SLOT(searchTitles()));
	connect(searchBox, SIGNAL(textEdited(const QString &)), this, SLOT(searchTitles()));

	
	//Set max values for the spin boxes
	tSpinBox->setMaximum(2048);
	calsBox->setMaximum(240000);

	//Connect to database
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("chromatichulk.com");
    db.setDatabaseName("chromatichulk_program");
    db.setUserName("jchase");
    db.setPassword("chrompass");
    bool ok = db.open();
    
    if(ok==true) // If your connected to the database
    {
     	cout << "Connected to chromatichulk.com chromatichulk_program database " << endl;
     	QPixmap connected_pic(25,25);
     	connected_pic.load(":/connected.png"); // Use the green led picture
     	connectedLabel->setPixmap(connected_pic);
     	populate_users_ingredient_list();
		recList->clear();
		
		//Query every recipe in the database and store it in a vector of type recipe
		QSqlQuery query;
    	query.exec("SELECT * FROM Recipes");
		while (query.next()) 
		{
			recipe rec;
			QString title=query.value(1).toString(); // Title
			QString description=query.value(3).toString(); // Description
			QString directions=query.value(11).toString(); // Directions
			int c_time =query.value(5).toInt(); // cook time
			int p_time =query.value(4).toInt(); // Prep time
			int cals =query.value(7).toInt(); // Calories
			int servs=query.value(12).toInt(); // Servings
			int sqlid = query.value(0).toInt();
			rec.set_recipe(description.toStdString(), title.toStdString(), directions.toStdString(), cals, servs, p_time, c_time, sqlid);
			to_filter.push_back(rec);
    	}
    	m_master_recipe_list=to_filter;
    	for(unsigned int i=0; i < to_filter.size(); i++)
		{
			int id=to_filter[i].getSqlid();
			QListWidgetItem * newItem = new QListWidgetItem;
			QString idplustitle=QString::number(id) + " : " + to_filter[i].getTitle().c_str();
    	    newItem->setText(idplustitle);
    		recList->insertItem(0, newItem);
		}
     }
     else //If your not connected to the database
     {
     	QPixmap not_connected_pic(25,25);
     	not_connected_pic.load(":/not_connected.png"); // Use the red led picture
     	connectedLabel->setPixmap(not_connected_pic);
     }
}

void MainWindowImpl::terminated()
//Pre: Quits the program
{
	qApp->quit();
}

void MainWindowImpl::add_rec()
//Pre: Launches add_recipe dialog
{
	DialogImpl *dia=new DialogImpl;
	dia->show();
}

void MainWindowImpl::killFilters()
{
	tSpinBox->clear();
	calsBox->clear();
	servsBox->clear();
	difficultyCombo->clear();
}

void MainWindowImpl::info()
//Pre: Launches information Dialog
{
	QMessageBox box;
	box.setText("Created By: Jack Acton, Justin Chase, Christian Gugas, Nat Bowman, & Norwit Veun");
	box.exec();
}

void MainWindowImpl::conver()
//Pre: Launches conversion dialog
{
	ConverImpl *conv=new ConverImpl;
	conv->show();
}

void MainWindowImpl::not_done()
//Pre: Launches feature not completed dialog
{
	QMessageBox box;
	box.setText("This feature is not coded yet");
	box.exec();//launch box
}

void MainWindowImpl::add_ing()
//Pre: Launches add_ingredient dialog
{
	add_ingredient *add=new add_ingredient;
	add->show();
}

void MainWindowImpl::saveInv()
//Pre: Inventory is changed through using editable list widget
//Post: The edits saved to the list widget are loaded back up to the database
{
	// Put everything in the list_Inv into a vector of type QString
	vector<QString> new_list;
	int num_users_ingredients=list_Inv->count();
	
	for(int i=0; i< num_users_ingredients; i++) 
	{
		QListWidgetItem * temp_item;
		temp_item=list_Inv->item(i);
		QString items_text=temp_item->text();
		new_list.push_back(items_text);
	}
	
	//Empty the users ingredient table
	QSqlQuery query;
    query.exec("TRUNCATE TABLE UserIngredient");
    
    // Parse the QStrings to put them into the table
	for(unsigned int i=0; i < new_list.size(); i++)
    {
    	string temp_string=new_list[i].toStdString();
		istringstream iss (temp_string, istringstream::in);
		string t_title, t_unit;
		char temp_ingredient;
		int t_quantity;
		iss >> t_quantity >> t_unit;
		while(iss.get(temp_ingredient) && temp_ingredient!= '\n')
		{
			t_title+=temp_ingredient;
		}
		
		//Put each parsed QString into the table
    	QSqlQuery q;
		q.prepare("INSERT INTO UserIngredient(userid, title, amount, unit) "
                  "VALUES (:userid, :title, :amount, :unit)");
     	q.bindValue(":userid", 1);
     	q.bindValue(":title", t_title.c_str());
     	q.bindValue(":amount", t_quantity);
     	q.bindValue(":unit", t_unit.c_str());
     	q.exec();
    }
    //Repopulate the users ingredient list
	populate_users_ingredient_list();
}

int MainWindowImpl::populate_users_ingredient_list()
//Pre: The users ingredient list is empty or is getting repopulated
//Post: The users ingredient list is updated to reflect the actual ingredient list
{
	int inventoryCount=0;
	
	//Empty the list
	list_Inv->clear();
	
	//Put all the items into the ingredient list (list_Inv)
	QSqlQuery query; 
    query.exec("SELECT * FROM UserIngredient");
	while (query.next()) 
	{
		 inventoryCount++;
		 int row=0;
         int ingredient_quantity=query.value(3).toInt();
         QString ingredient_type=query.value(4).toString();
         QString ingredient= QString::number(ingredient_quantity) + " " + ingredient_type + query.value(2).toString();
         QListWidgetItem * newItem = new QListWidgetItem;
         newItem->setText(ingredient);
    	 newItem->setFlags (newItem->flags () | Qt::ItemIsEditable);
    	 list_Inv->insertItem(row, newItem);
     }
     return inventoryCount;
}

void MainWindowImpl::populate_recipe_list()
{
	QSqlQuery query; 
    query.exec("SELECT * FROM Recipes");
	while (query.next()) 
	{
         QString recipe_name = query.value(1).toString();
         recList->addItem(recipe_name);
     }
}

vector<recipe> MainWindowImpl::populate_recipe_time_filter(int time_to_filter, vector<recipe> to_be_filtered)
//Pre: Takes in an integer as time to filter in minutes, and a vector of already filtered recipes
//Post: Returns a list of filtered further recipes based on the minutes
{
	vector<recipe> filtered;
	for(unsigned int i=0; i < to_be_filtered.size(); i++)
	{
		if(time_to_filter > to_be_filtered[i].getTime())
		{
			filtered.push_back(to_be_filtered[i]);
		}
	}
    return filtered;
}

vector<recipe> MainWindowImpl::populate_recipe_difficulty(int difficulty, vector<recipe> to_be_filtered)
{
	vector<recipe> filtered;
	for(unsigned int i=0; i < to_be_filtered.size(); i++)
	{
		if(difficulty < to_be_filtered[i].getDifficulty())
		{
			filtered.push_back(to_be_filtered[i]);
		}
	}
    return filtered;
}

void MainWindowImpl::apply_filters()
//Pre: User selects several filters or none at all
//Post: Based on the filters chosen the recipe list will then reflect which recipes fall under the 
{    
	recList->clear();
	to_filter=m_master_recipe_list;
	// If the user entered in a time value in the spin box generate the proper vector of recipes
	if(tSpinBox->value() > 0)
	{
		to_filter=populate_recipe_time_filter(tSpinBox->value(), to_filter);
		cout << "Filter by time: " << tSpinBox->value() << " : " << to_filter.size() << endl;
	}
	
	//If the user enters in a calorie value
	if(calsBox->value() > 0)
	{
		to_filter=populate_recipe_calories(calsBox->value(), to_filter);
		cout << "Filter by Calories: " << calsBox->value() << " : " << to_filter.size() << endl;
	}
	
	//If the user enters in a serving box
	if(servsBox->value() > 0)
	{
		to_filter=populate_recipe_servings(servsBox->value(), to_filter);
		cout << "Filter by Servings: " << servsBox->value() << " : " << to_filter.size() << endl;
	}
	cout << "Filterd: " << to_filter.size() << endl; // Current number of filtered recipes for debugging purposes
	
	//If the user enters in a difficulty to filter the database one
/*	if(difficultyCombo->currentText()!="")
	{
		//If they choose easy 1
		if(difficultyCombo->currentText()=="Easy")
		{
			to_filter=populate_recipe_difficulty(1, to_filter);
		}
		//if they choose medium 2
		else if(difficultyCombo->currentText()=="Medium")
		{
			to_filter=populate_recipe_difficulty(2, to_filter);
		}
		//if they choose hard 3
		else if(difficultyCombo->currentText()=="Hard")
		{
			to_filter=populate_recipe_difficulty(3, to_filter);
		}
		//if they choose very hard 4
		else if(difficultyCombo->currentText()=="Very Hard")
		{
			to_filter=populate_recipe_difficulty(4, to_filter);
		}
	}
*/
	// For all the recipes which have been filtered display them in the recipe list
	for(unsigned int i=0; i < to_filter.size(); i++)
	{
		int id=to_filter[i].getSqlid();
		QListWidgetItem * newItem = new QListWidgetItem;
		QString idplustitle=QString::number(id) + " : " + to_filter[i].getTitle().c_str();
        newItem->setText(idplustitle);
    	//newItem->setFlags (newItem->flags () | Qt::ItemIsEditable);
    	recList->insertItem(0, newItem);
	}
}

vector<recipe> MainWindowImpl::populate_recipe_calories(int calories, vector<recipe> to_be_filtered)
//Pre: Takes in an integer as time to filter in calories, and a vector of already filtered recipes
//Post: Returns a list of filtered further recipes based on the calories
{
	vector<recipe> filtered;
	for(unsigned int i=0; i < to_be_filtered.size(); i++)
	{
		if(to_be_filtered[i].getCal() <= calories)
		{
			filtered.push_back(to_be_filtered[i]);
		}
	}
	return filtered;
}

vector<recipe> MainWindowImpl::populate_recipe_servings(int servings, vector<recipe> to_be_filtered)
//Pre: Takes in an integer as time to filter in servings, and a vector of already filtered recipes
//Post: Returns a list of filtered further recipes based on the servings
{
	vector<recipe> filtered;
	for(unsigned int i=0; i < to_be_filtered.size(); i++)
	{
		if(to_be_filtered[i].getServ() <= servings)
		{
			filtered.push_back(to_be_filtered[i]);
		}
	}
	return filtered;
}

vector<recipe> MainWindowImpl::populate_recipe_difficulty(string difficulty, vector<recipe> to_be_filtered)
//Pre: Takes in a string as time to filter in difficulty, and a vector of already filtered recipes
//Post: Returns a list of filtered further recipes based on the difficulty
{
	vector<recipe> filtered;
	filtered=to_be_filtered;
	difficulty+=" ";
	return filtered;
}

void MainWindowImpl::previewIngred()
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

void MainWindowImpl::saveIngred()
//Pre: user wants to save ingredient and add it to the ingredient list
//Post: ENtered in item is saved to the ingredient listwidget and the ingredient sql database is updated to reflect this
{
	if(descEdit->text()!="")
	{
    	QString append;
    	append = QString::number(quanSpin->value()) + " " + myCombo->currentText() + " " + descEdit->text();
    	vector<QString> new_list;
		int num_users_ingredients=list_Inv->count();
			
		for(int i=0; i< num_users_ingredients; i++) 
		{
			QListWidgetItem * temp_item;
			temp_item=list_Inv->item(i);
			QString items_text=temp_item->text();
			new_list.push_back(items_text);
		}
		list_Inv->addItem(append);
		saveInv();
   	}
   	else
   	{
   	   	QMessageBox::warning(this, "Failure to Save Ingredient",
    	"Please enter in atleast the description of the ingredient.\n" 
    	);
  	}
	//if the ingredient is already in the users database notify with dialog and ask if they want to append or not
}

void MainWindowImpl::clearFields()
//Pre: Values are in the fields which wish to be cleared'
//Post: Clears the fields 
{
	descEdit->clear();
	quanSpin->clear();
}

void MainWindowImpl::removeSelected()
//Pre: User selected an item to remove from the database and listwidget
//Post: Removes the selected item from the listwidget and database
{
	int a=list_Inv->currentRow();
	if(a!=-1) // If the user selects an item to remove from the inventory list
	{
		delete list_Inv->takeItem(a);
		saveInv();
	}
	else // The user does not select an item before clicking the button
	{
		QMessageBox::warning(this, "Failure to Remove Selected Ingredient",
    	"Please select an ingredient to remove.\n" 
    	);
	}
}

void MainWindowImpl::previewSelected()
//Pre: Person selects a recipe 
//Post: Displays the selected recipe and its ingredients
{
	int a=recList->currentRow();
	if(a!=-1) // If the user selects an item to remove from the inventory list
	{
		int selected_sqlid;
		QListWidgetItem * item;
		item=recList->item(a);
		string derive_sqlid=item->text().toStdString();

		char temp_char;
		//Parse the stream
		istringstream iss (derive_sqlid, istringstream::in);
		temp_char=iss.peek();
		
		//If the recipe is the return from a failed searchBox("No matching results for: "
		if(temp_char=='N')
		{
			QMessageBox::warning(this, "Failure to Preview Selected",
    		"Selected is not a valid Recipe.\n" 
    		);
			return;
		}

		iss >> selected_sqlid;
		selected_sqlid--;
		
		QString t_title=m_master_recipe_list[selected_sqlid].getTitle().c_str();
		QString t_desc=m_master_recipe_list[selected_sqlid].getDesc().c_str();
		QString t_direct=m_master_recipe_list[selected_sqlid].getDirect().c_str();
		QString t_nums=QString::number(m_master_recipe_list[selected_sqlid].getServ());
		QString t_prep=QString::number(m_master_recipe_list[selected_sqlid].getPrep());
		QString t_cook=QString::number(m_master_recipe_list[selected_sqlid].getCook());
		QString t_cal=QString::number(m_master_recipe_list[selected_sqlid].getCal());
		QString t_total_time=QString::number(m_master_recipe_list[selected_sqlid].getTime());
		
		QSqlQuery query;
		vector<string> t_ingredients;
		//Query ingredients from table with the sqlid
		query.prepare
		("SELECT * FROM RecipeIngredient WHERE recipeID = :entry");
		QString red_tony=QString::number(++selected_sqlid); //AYE REDTONY
		
		query.bindValue(":entry", red_tony);
    	query.exec();
  		//Put all the ingredients into the vector of strings
		while (query.next()) 
		{
			QString ingredient_title=query.value(2).toString();
			QString ingredient_unit=query.value(4).toString();
			int ing_quan=query.value(3).toInt();
			QString ingredient_quantity=QString::number(query.value(3).toInt());
			//If the quantity isint zero show the value
			if(ing_quan!=0)
			{
				t_ingredients.push_back(ingredient_quantity.toStdString() + " " + ingredient_unit.toStdString() + " " + ingredient_title.toStdString());
			}
			//If it is zero dont show the quantity just the unit
			else
			{
				t_ingredients.push_back(ingredient_unit.toStdString() + " " + ingredient_title.toStdString());
			}
		}
		string ingreds;
		//Add all the ingredients to one string each seperated by a newline char
		for(unsigned int i=0; i < t_ingredients.size(); i++)
    	{
    		ingreds+=t_ingredients[i];
    		ingreds+='\n';
   		}
   		//Display the dialog box
		QMessageBox::about(this, "Preview Recipe",
    		+"Title: " + t_title + "\n \n"
    		+"Description: " + t_desc  + "\n \n"
    		+ "Ingredients: \n"
    		+ ingreds.c_str() + "\n"
    		+ "Directions: \n"
    		+ t_direct + "\n"
    		+ "Number of Servings: " + t_nums + "\n"
			+ "Prep-Time: " + t_prep + " mins \n"
			+ "Cook-Time: " + t_cook + " mins \n"
			+ "Ready-Time: " +  t_total_time + " mins \n"
			+ "Calories: " + t_cal + "\n"
    		);
   	}
	else // The user does not select an item before clicking the button
	{
		QMessageBox::warning(this, "Failure to Preview Selected Recipe",
    		"Please select a Recipe to preview.\n" 
    	);
   	}
}

string MainWindowImpl::toLowerCase(string str) 
//Pre: Given a string with upper and lower case
//Post: returns a string with all lowercase chars
{
      for (unsigned int i=0;i<strlen(str.c_str());i++)
      if (str[i] >= 0x41 && str[i] <= 0x5A)
      str[i] = str[i] + 0x20;
      return str;
}

void MainWindowImpl::searchTitles()
//Pre: Given a string
//Post: populates the current recipe list with the given string
{
	recList->clear();
	vector<recipe> filtered;
	// If there is text in the searchbox
	if(searchBox->text()!="")
	{	
		//take the text ouut of the box make it a std string
		string search_token=searchBox->text().toStdString();
		// convert that to lowercase
		search_token=toLowerCase(search_token);
		
		vector<int> prev_insert;
		
		//for every recipe in the master list
		for(unsigned int i=0; i < m_master_recipe_list.size(); i++)
		{
			//get the recipes title and convert it to lowercase
			string recipes_title=toLowerCase(m_master_recipe_list[i].getTitle());
			//for search token starting on character 0 of string recipes_title, if the current position does not equal the strings position find from the last position
			for(unsigned int t = recipes_title.find(search_token, 0); t != string::npos; t = recipes_title.find(search_token, t))
			{
				
				t++;
				//istringstream iss (m_master_recipe_list[i].getTitle(), istringstream::in);
				//int prev_checker;
				//iss >> prev_checker;
				
				//for(unsigned int z=0; z < prev_insert.size(); z++)
				//{
					//if(prev_insert[z]!=prev_checker)
					//{
					//	prev_insert.push_back(prev_checker);
						filtered.push_back(m_master_recipe_list[i]); // found so push to filter???
						break; // break because recipe already push to filter
					//}
					//else
					//{
						//
					//}
				//}
				//Push the recipe into the filtered list if the token is found
			}
		}
		//Clear the recipe list widget
		recList->clear();
		
		//If there are no search results
		if(filtered.size()==0)
		{
			QListWidgetItem * newItem = new QListWidgetItem;
			QString idplustitle= "No matching results for: " + searchBox->text();
    	    newItem->setText(idplustitle);
    	    //Insert it into the recList widget
    		recList->insertItem(0, newItem);
		}
		//for every recipe in the filtered recipe vector
		for(unsigned int i=0; i < filtered.size(); i++)
		{
			int id=filtered[i].getSqlid();
			QListWidgetItem * newItem = new QListWidgetItem;
			QString idplustitle=QString::number(id) + " : " + filtered[i].getTitle().c_str();
    	    newItem->setText(idplustitle);
    	    //Insert it into the recList widget
    		recList->insertItem(0, newItem);
		}
	}
	else // The user has nothing in the search box
	{
		for(unsigned int i=0; i < m_master_recipe_list.size(); i++)
		{
			int id=m_master_recipe_list[i].getSqlid();
			QListWidgetItem * newItem = new QListWidgetItem;
			QString idplustitle=QString::number(id) + " : " + m_master_recipe_list[i].getTitle().c_str();
    	    newItem->setText(idplustitle);
    	    //Insert it into the recList widget
    		recList->insertItem(0, newItem);
   		}
	}
}
