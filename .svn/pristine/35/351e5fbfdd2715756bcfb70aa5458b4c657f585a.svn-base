#ifndef MAINWINDOWIMPL_H
#define MAINWINDOWIMPL_H
//
#include <QMainWindow>
#include "ui_mainwindow.h"
#include "recipe.h"
#include <string>
#include <vector>
//
using namespace std;
class MainWindowImpl : public QMainWindow, public Ui::MainWindow
{
Q_OBJECT
public:
	MainWindowImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
	vector<recipe> m_master_recipe_list; // The master un_filtered recipe list
	vector<recipe> to_filter; // The currently filtered recipe list
private slots:
	void terminated();//exit app
	void add_rec();//show add recipes
	void info(); //about box for program
	void conver();  //Convert Units
	void not_done();//display msgbox to let user know function doesnt work
	void add_ing();//add ingrediant
	string toLowerCase(string to_convert); // Converts a string from upper to lowercase
	int populate_users_ingredient_list(); //Fills users ingredient list
	void apply_filters(); // Applies the filters to the main_recipe_list
	void previewIngred(); // Previews the ingredient based on whats entered in the ingredient fields
	void saveIngred(); // Saves the ingredients and appends it to the mysql database
	void clearFields(); // Clears all the associated fields with adding an ingredient
	void removeSelected(); // Removes the selected ingredient from the listwidget and sql database
	void previewSelected(); // Previews the selected ingredient
	void saveInv(); // Parses and updates the users ingredient list
	void populate_recipe_list();//returns all the recipes to the list
	void searchTitles(); // Searches the recipes titles for a given string
	void killFilters();//clears the filters
	vector<recipe> populate_recipe_difficulty(int difficulty, vector<recipe> to_be_filtered); // Filters the recipe list on difficulty
	vector<recipe> populate_recipe_time_filter(int time_to_filter, vector<recipe> to_be_filtered); // FIlters the recipe list based on time
	vector<recipe> populate_recipe_calories(int calories, vector<recipe> to_be_filtered); // FIlters the recipe list based on calories
	vector<recipe> populate_recipe_servings(int servings, vector<recipe> to_be_filtered); // FIlters the recipe list based on the number of servings
	vector<recipe> populate_recipe_difficulty(string difficulty, vector<recipe> to_be_filtered); // Filters the recipe list based on difficulty
};
#endif




