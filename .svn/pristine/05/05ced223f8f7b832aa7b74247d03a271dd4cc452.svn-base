#include <string>
#include <iostream>
#ifndef UTILS_H_
#define UTILS_H_
using namespace std;
class utils
{
	public:
	int type_quantity, quantity;
	static const char MY_DATABASE[];
	static const char MY_HOST[];
	static const char MY_USER[];
	static const char MY_PASSWORD[];
	utils();
	double type_and_value(int type, double value);
	
	double grams_to_cups(double measure_in_grams); //1cup =236.6g
	double kilograms_to_cups(double measure_in_kilograms); //1cup =.2366kg
	double tablespoons_to_cups(double measure_in_tablespoons); //1 cup= 16 tablespoons
	double ounces_to_cups(double measure_in_ounces); //1 cup = 8.345oz
	double fluidoz_to_cups(double measure_in_fluidoz); //1 cup = 8 .floz
	double teaspoons_to_cups(double measure_in_teaspoons); // 1 cup =48 teaspoons
	double pints_to_cups(double measure_in_pints); //1 cup = .5 pints
	double mililiters_to_cups(double measure_in_mililiters); //1cup =236.6ml
	double liters_to_cups(double measure_in_liters); //1cup =.2366li
	
	double cups_to_grams(double measure_in_cups); //1g = 0.004227 cups
	double cups_to_kilograms(double measure_in_cups); //1kg = 4.227 cups
	double cups_to_tablespoons(double measure_in_cups); //1tbs = 0.0625 cups
	double cups_to_teaspoons(double measure_in_cups); //1tsp = 0.02083 cups
	double cups_to_liters(double measure_in_cups); //1l = 4.227 cups
	double cups_to_mililiters(double measure_in_cups); //1ml = 0.004227 cups
	double cups_to_pints(double measure_in_cups); // 1pt = 2 cups
	double cups_to_ounces(double measure_in_cups); // 1oz = 0.1198 cups
	double cups_to_fluidoz(double measure_in_cups); //1floz = 0.125 cups
	string escapeSqlValue(const string& sql);
	
	private:
	double m_current_value;
};
#endif
