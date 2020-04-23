#pragma once
#include<string>
#include<iostream>
#include "student.h"
using namespace std;

// creat student table


	const int numStudents = 5;
	static string studentData[numStudents] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,D,S,DS@wgu.edu,31,25,34,31,SOFTWARE"
	};

//E.  Create a Roster class
class Roster {


public:
	int lastIndex;
	int capacity;
	Student** classRosterArray;
	void parseAdd(string datarow);
	void print_All();
	bool remove(string studentID);
	void printAverageDays(string studentID);
	void printByDegreeType(DegreeType d);
	void printInvailidDaysEntires();
	
	Roster();
	Roster(int capacity);
	~Roster();

};

