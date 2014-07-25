//By :  Justin Chase
//Class : CSCI 430
//Group : 1
//Email : jujowned@gmail.com
#include <iostream>
#include <string>
#include "recipe.h"
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <unistd.h>
#include <fstream>
#include <cctype>
#include <sstream>
//#include "allrec.h"
//#include "item.cpp"
#include <vector>

using namespace std;

recipe::recipe()
{
}

bool recipe::set_recipe(string description, string title, /*int difficulty, vector<string> ingredients,*/ string directions, int calories, int servings, int prep_time, int cook_time, int sqlid)
{
	m_description=description;
	//v_ingredients=ingredients;
	v_directions=directions;
	m_calories=calories;
	m_servings=servings;
	//difficulty=m_difficulty;
	m_title=title;
	m_prep_time=prep_time;
	m_cook_time=cook_time;
	m_number_of_directions=v_directions.size();
	m_number_of_ingredients=v_ingredients.size();
	m_ready_time = m_prep_time + m_cook_time;
	m_sqlid=sqlid;
	return true;
}
int recipe::getSqlid()
{
	return m_sqlid;
}
string recipe::getTitle()
{
	return m_title;
}
int recipe::getCal()
{
	return m_calories;
}
int recipe::getPrep()
{
	return m_prep_time;
}
int recipe::getDifficulty()
{
	return m_difficulty;
}
int recipe::getCook()
{
	return m_cook_time;
}
int recipe::getTime()
{
	return m_prep_time + m_cook_time;
}
int recipe::getNumDirect()
{
	return m_number_of_directions;
}
int recipe::getNumIngred()
{
	return m_number_of_ingredients;
}
int recipe::getServ()
{
	return m_servings;
}
string recipe::getDirect()
{
	return v_directions;
}
string recipe::getDesc()
{
	return m_description;
}
