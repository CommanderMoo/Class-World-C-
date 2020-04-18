#include "Person.h"


#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "\n\n\t\t *** World *** \n\n";
	//rinse and repeat for more classes
	//only use classes to create objects
	Person student1("Sam", "20 years old", 100);
	Person student2("Russ", "25 years old", 100);
	Person student3("Buzzy","30 years old", 100);
	Person professor("Spades","20 years old",100);
	Person student4("Axel","22 years old",100);

	//introducing objects
	professor.HairColor = "Grey";
	professor.Talk("Welcome to the class!");
	student1.Talk("Is there a reason use classes then just going with headers & source");
	professor.Talk("Yes, to save code and because we think in objects!");
	student2.Walk(20, "The classroom");
	student2.Talk("Sorry, I am late, there was a dragon which attacked me on the way to school");
	return 0;
}

//in our world we have people