//By: Justin Chase
//CSCI 430 : Group 1

#ifndef DIALOGIMPL_H
#define DIALOGIMPL_H

#include <QDialog>
#include "ui_dialog.h"

class DialogImpl : public QDialog, public Ui::addRecipe
{
Q_OBJECT
public:
	DialogImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
private slots:
	void addRec(); // When clicked currently saves all fields to a text file in the sub dir "recipes"
	void clearFields(); // Clears all of the text fields and spin boxes
	void previewRec(); // Previews the current recipe in a pop up window
	void doneClicked(); // exits the program
};
#endif
