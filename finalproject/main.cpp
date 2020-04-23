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
	

	Roster* rep = new Roster(numStudents);
	cout << "Parsing data and adding students: \t";
	for (int i= 0; i < numStudents; i++)
	{
		rep->parseAdd(studentData[i]);
	}
	cout << "DONE.\n";
	cout << "Displaying all books:\n";


	rep->print_All();

	cout << "Removing A1:\n";
	if (rep->remove("A1")) rep->print_All();
	else cout << "Book not found!\n";

	rep->printAverageDays("A3");

	rep->printInvailidDaysEntires();

	rep->printByDegreeType(SECURITY);
	rep->printByDegreeType(NETWORK);
	rep->printByDegreeType(SOFTWARE);

		system("pause");
	return 0;
}