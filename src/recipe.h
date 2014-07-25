//By :  Justin Chase
//Class : CSCI 430
//Group : 1
//Email : jujowned@gmail.com
#include <string>
//#include "item.h"
#include <vector>
#ifndef _RECIPE_
#define _RECIPE_

using namespace std;

class recipe
{
	public:
	recipe();
	bool set_recipe(string description, string title, /*vector<string> ingredients,*/ string directions, int calories, int servings, int prep_time, int cook_time, int sqlid);
	int getCal(); // GEts calories
	int getTime(); // Gets time 
	int getNumDirect();// gets number of directions
	int getNumIngred(); // gets number of ingredients
	int getPrep(); // gets prep time
	int getCook(); // gets cook time
	int getDifficulty(); // gets difficulty
	int getServ(); // gets number of servings
	string getTitle(); // gets the recipes title
	int getSqlid(); // gets the recipes sqlid
	string getDesc(); // gets the recipes description
	string getDirect(); // gets the recipes directions
	int m_sqlid; 
	int m_difficulty;
	string m_description, m_note, m_title;
	string v_directions;
	vector<string> v_ingredients;

	int m_cook_time, m_prep_time, m_ready_time, m_calories, m_servings, m_total_fat, m_cholesterol, m_sodium, m_total_carbs, m_protein, m_number_of_directions, m_number_of_ingredients;
};
#endif
