#include <iostream>
#include <string>
#include "roster.h"
#include <sstream>


using std::cout;
using std::endl;
using std::string;
using namespace std;



int main()
{

	cout << "SCRIPTING AND PROGRAMMING APPLICATION C867\n";
	cout << "C++\n";

	Roster* rep = new Roster(numStudents);
	cout << "Parsing data and adding students:\t";
	for (int i= 0; i < numStudents; i++)
	{
		rep->parseAdd(studentData[i]);
	}
	cout << "DONE.\n";
	cout << "Displaying all students:\n";


	rep->print_All();

	cout << "Removing A1:\n";
	if (rep->remove("A1")) rep->print_All();
	else cout << "Book not found!\n";

	cout << "Removing A1:\n";
	if (rep->remove("A1")) rep->print_All();
	else cout << "Book not found!\n";

	rep->printAverageDaysInCourse("A3");

	rep->printInvailidDaysEntires();

	rep->printByDegreeProgram(SECURITY);
	rep->printByDegreeProgram(NETWORK);
	rep->printByDegreeProgram(SOFTWARE);

		system("pause");
	return 0;
}