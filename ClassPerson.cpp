#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

void Person::Talk(string stuffToSay)
{
	cout << endl << stuffToSay << endl;
}

void Person::Walk(string numberOfSteps)
{
	cout << "\n this person takes " << numberOfSteps << endl;
}