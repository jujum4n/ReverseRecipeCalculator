#include "converimpl.h"
#include <QMessageBox> //Part of QT library
#include "utils.h"

using namespace std;
//
ConverImpl::ConverImpl( QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
{
	setupUi(this);
	connect(btAdd, SIGNAL(clicked()), this, SLOT(doneClicked()));
	connect(btConvert, SIGNAL(clicked()), this, SLOT(convertClicked()));
}

void ConverImpl::doneClicked()
{
	this->close();
}

void ConverImpl::convertClicked()
{
	utils conversions;
	if(dsb->value()!=0)
	{
		
	
	if(myCombo->currentText()=="Cups")
	{
		myList->clear();
		double value=dsb->value();
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Ounces")
	{
		myList->clear();
		double value=dsb->value();
		double ouncesc;
		ouncesc=conversions.ounces_to_cups(value);
		myList->addItem(QString::number(ouncesc) + " Cups");
		value=conversions.ounces_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Fluid Ounces")
	{
		myList->clear();
		double value=dsb->value();
		double flozc;
		flozc=conversions.fluidoz_to_cups(value);
		myList->addItem(QString::number(flozc) + " Cups");
		value=conversions.fluidoz_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Liters")
	{
		myList->clear();
		double value=dsb->value();
		double litersc;
		litersc=conversions.liters_to_cups(value);
		myList->addItem(QString::number(litersc) + " Cups");
		value=conversions.liters_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Grams")
	{
		myList->clear();
		double value=dsb->value();
		double gramsc;
		gramsc=conversions.grams_to_cups(value);
		myList->addItem(QString::number(gramsc) + " Cups");
		value=conversions.grams_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Mililiters")
	{
		myList->clear();
		double value=dsb->value();
		double mililitersc;
		mililitersc=conversions.mililiters_to_cups(value);
		myList->addItem(QString::number(mililitersc) + " Cups");
		value=conversions.mililiters_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
	}
	if(myCombo->currentText()=="Kilograms")
	{
		myList->clear();
		double value=dsb->value();
		double kilogramsc;
		kilogramsc=conversions.kilograms_to_cups(value);
		myList->addItem(QString::number(kilogramsc) + " Cups");
		value=conversions.kilograms_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Pints")
	{
		myList->clear();
		double value=dsb->value();
		double pintsc;
		pintsc=conversions.pints_to_cups(value);
		myList->addItem(QString::number(pintsc) + " Cups");
		value=conversions.pints_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Tablespoons")
	{
		myList->clear();
		double value=dsb->value();
		double tablespoonsc;
		tablespoonsc=conversions.tablespoons_to_cups(value);
		myList->addItem(QString::number(tablespoonsc) + " Cups");
		value=conversions.tablespoons_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(teaspoons)+ " Teaspoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	if(myCombo->currentText()=="Teaspoons")
	{
		myList->clear();
		double value=dsb->value();
		double teaspoonsc;
		teaspoonsc=conversions.teaspoons_to_cups(value);
		myList->addItem(QString::number(teaspoonsc) + " Cups");
		value=conversions.teaspoons_to_cups(value);
		double fluidoz;
		fluidoz=conversions.cups_to_fluidoz(value);
		double ounces;
		ounces=conversions.cups_to_ounces(value);
		double grams;
		grams=conversions.cups_to_grams(value);
		double kilograms;
		kilograms=conversions.cups_to_kilograms(value);
		double teaspoons;
		teaspoons=conversions.cups_to_teaspoons(value);
		double tablespoons;
		tablespoons=conversions.cups_to_tablespoons(value);
		double pints;
		pints=conversions.cups_to_pints(value);
		double liters;
		liters=conversions.cups_to_liters(value);
		double mililiters;
		mililiters=conversions.cups_to_mililiters(value);
		myList->addItem(QString::number(fluidoz) + " fl oz. (Fluid Ounces)");
		myList->addItem(QString::number(ounces) + " oz. (Ounces)");
		myList->addItem(QString::number(grams) + " g (Grams)");
		myList->addItem(QString::number(kilograms) + " kg (Kilograms)");
		myList->addItem(QString::number(tablespoons) + " Tablespoons");
		myList->addItem(QString::number(pints) + " Pints");
		myList->addItem(QString::number(liters) + " Liters");
		myList->addItem(QString::number(mililiters)+ " Mililiters");
	}
	}
	else
	{
		QMessageBox::warning(this, "Failure to Convert",
    	"Please enter in a positive value greater than 0.0\n" 
    	);	
	}
	
}
//
