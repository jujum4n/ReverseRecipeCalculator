#include "utils.h"
#include <iostream>
#include <string>

using namespace std;

const char utils::MY_DATABASE[]="";
const char utils::MY_HOST[]="";
const char utils::MY_USER[]="";
const char utils::MY_PASSWORD[]="";

utils conversions;
utils::utils()
{
	
}
string utils::escapeSqlValue(const string& sql) // Function to escape characters before insertion into the database
{
        string newsql;
        for (unsigned int i = 0; i < sql.length(); ++i)
        {
                char c = sql[i];
                switch(c)
                {
                case '\'':
                case '\"':
                case '\\':
                        newsql += '\\';
                        newsql += c;
                        break;   // insert an additional backslash
                default:  newsql += c;  break;
                }
        }
        return newsql;
}
double utils::type_and_value(int type, double value)
//Pre: Given a type of value and the actual value it will return a double in cups to program to be passed to the ancillary conversion functions
//Post: Returns a double in cups of the type and value given to the function
{
	if(type==1) // Grams to cups
	{
		return conversions.grams_to_cups(value);
	}
	if(type==2) // Kilograms to cups
	{
		return conversions.kilograms_to_cups(value);
	}
	if(type==3) // Table spoons to cups
	{
		return conversions.tablespoons_to_cups(value);
	}
	if(type==4) // ounces to cups
	{
		return conversions.ounces_to_cups(value);
	}
	if(type==5) // fluidoz to cups
	{
		return conversions.fluidoz_to_cups(value);
	}
	if(type==6) // teaspoons to cups
	{
		return conversions.teaspoons_to_cups(value);
	}
	if(type==7) // pints to cups
	{
		return conversions.pints_to_cups(value);
	}
	if(type==8) // liters to cups
	{
		return conversions.liters_to_cups(value);
	}
	if(type==9) // mililiters to cups
	{
		return conversions.mililiters_to_cups(value);
	}
	return 0.00;
}
double utils::grams_to_cups(double measure_in_grams) //1cup =236.6g
//Pre: Takes in a double of a measure in grams
//Post: Returns the double of measured in grams as cups
{
	double value;
	value = measure_in_grams / 236.6;
	return value;
}
double utils::kilograms_to_cups(double measure_in_kilograms) //1cup =.2366kg
//Pre: Takes in the double as kilo grams
//Post: Returns a double of the kilograms measure converted to cups
{
	double value;
	value = measure_in_kilograms / .2366;
	return value;
}
double utils::tablespoons_to_cups(double measure_in_tablespoons) //1 cup= 16 tablespoons
//Pre: Takes in a measure in tablespoons
//Post: Returns a double of the measure in table spoons as cups
{
	double value;
	value = measure_in_tablespoons / 16;
	return value;
}
double utils::ounces_to_cups(double measure_in_ounces) //1 cup = 8.345oz
//Pre: Takes in a measure in ounces
//Post: Returns a double value of the measur ein ounces converted to cups
{
	double value;
	value = measure_in_ounces / 8.345;
	return value;
}
double utils::fluidoz_to_cups(double measure_in_fluidoz) //1 cup = 8 .floz
//Pre: TAkes in a measure in fluid ounces
//Post: Returns a double of the converted fluid ounces to cups
{
	double value;
	value = measure_in_fluidoz / 8;
	return value;
}
double utils::teaspoons_to_cups(double measure_in_teaspoons) // 1 cup =48 teaspoons
//Pre: Takes in a measure in teaspoons
//Post: Returns a double from the measure_in_*.* and converts it to cups
{
	double value;
	value = measure_in_teaspoons / 48;
	return value;
}
double utils::pints_to_cups(double measure_in_pints) //1 cup = .5 pints
//Pre: Takes in a measure in pints
//Post: Returns a double from the measure_in_*.* and converts it to cups
{
	double value;
	value = measure_in_pints / .5;
	return value;
}
double utils::mililiters_to_cups(double measure_in_mililiters) //1cup =236.6ml
//Pre: Takes in a measure in mililiters
//Post: Returns a double from the measure_in_*.* and converts it to cups
{
	double value;
	value = measure_in_mililiters / 236.6;
	return value;
}
double utils::liters_to_cups(double measure_in_liters) //1cup =.2366li
//Pre: Takes in a measure in liters
//Post: Returns a double from the measure_in_*.* and converts it to cups
{
	double value;
	value = measure_in_liters / .2366;
	return value;
}
double utils::cups_to_grams(double measure_in_cups) //1g = 0.004227 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in grams
{ 
	double value;
	value = measure_in_cups / 0.004227;
		
	return value;
}
double utils::cups_to_kilograms(double measure_in_cups) //1kg = 4.227 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in kilograms
{
	double value;
	value = measure_in_cups / 4.227;
	return value;
}
double utils::cups_to_tablespoons(double measure_in_cups) //1tbs = 0.0625 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in tablespoons
{
	double value;
	value = measure_in_cups / 0.0625;
	return value;
}
double utils::cups_to_teaspoons(double measure_in_cups) //1tsp = 0.02083 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in teaspoons
{
	double value;
	value = measure_in_cups / 0.02083;
	return value;
}
double utils::cups_to_liters(double measure_in_cups) //1l = 4.227 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in liters
{
	double value;
	value = measure_in_cups / 4.227;
	return value;
}
double utils::cups_to_mililiters(double measure_in_cups) //1ml = 0.004227 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in mililiters
{
	double value;
	value = measure_in_cups / 0.004227;
	return value;
}
double utils::cups_to_pints(double measure_in_cups) // 1pt = 2 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in pints
{
	double value;
	value = measure_in_cups / 2;
	return value;
}
double utils::cups_to_ounces(double measure_in_cups) // 1oz = 0.1198 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in ounces
{
	double value;
	value = measure_in_cups / 0.1198;
	return value;
}
double utils::cups_to_fluidoz(double measure_in_cups) //1floz = 0.125 cups
//Pre: Takes in a measure in as cups
//Post: Returns a double in fluidoz
{
	double value;
	value = measure_in_cups / 0.125;
	return value;
}
