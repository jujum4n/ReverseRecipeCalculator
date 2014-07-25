//By: Justin Chase
//CSCI 430 : Group 1

#include "ingredient.h"
#ifndef ADD_INGREDIENT_H
#define ADD_INGREDIENT_H
//
#include <QDialog>
#include "ui_add_ingredient.h"
//
class add_ingredient : public QDialog, public Ui::add_ingredient
{
Q_OBJECT
public:
	add_ingredient( QWidget * parent = 0, Qt::WFlags f = 0);
private slots:
	void clearFields(); // Clears the ingredients fields
	void previewIngred(); // Previews current ingredient
	void doneClicked(); // exits
	void saveIngred(); // SAves the ingredient
	//void load_users_ingredient_list(vector<ingredient> users_ingredients);
};
#endif




