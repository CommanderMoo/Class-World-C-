#pragma once
#include <string>


using namespace std;

	//a class is a template
	//class =< many objects
	// make a class before making an object


class Person
{
public:
	//prototype public methods
	//methods == functions (same thing)
	void Talk(string stuffToSay);
	void Walk(int numberOfSteps, string desk);
	//constructor
	Person(string name, string age, int health);
	//Public Properties
	string HairColor;



private:
	//these are properties of the class (variables)
	string Name;
	string Age;
	int Health;


};

