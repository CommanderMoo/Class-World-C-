//files
#include "Person.h"

//libraries
#include <string>
#include <iostream>


using namespace std;

 Person::Person(string name, string age, int health)
{
	cout << "\n I am Born! \n";
	Name = name;
	Age = age;
	Health = health;
}

void Person::Talk(string stuffToSay)
{
	cout << endl << Name << " says " << stuffToSay << endl;
}

void Person::Walk(int numberOfSteps, string desk)
{
	cout << endl  << Name << " takes " << numberOfSteps << " steps into the " << desk <<endl;
}