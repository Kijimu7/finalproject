#pragma once
#include <string>
#include<iostream>
#include "degree.h"
using std::string;

class Student

{

	//D1. create variables



private:
	string studentID;
	string firstName;
	string lastName;
	string Email;
	string age;
	double* days;
	DegreeProgram dtype;

public:

	const static int daysArray = 3;
	Student(); // empty constructor

	Student(string ID, string firstName, string lastName, string email, int Age, double days[], DegreeProgram type);
	
	//full constractor
	Student(string ID, string firstName, string lastName, string email, string age, double days[], DegreeProgram type);

	//create function getter
	string getID();
	string getFirstname();
	string getLastname();
	string getEmail();
	string getAge();
	double* getDays();
	DegreeProgram getDegreeProgram();

	//create setter
	void setID(string StudentID);
	void setFirstname(string firstname);
	void setLastname(string lastname);
	void setEmail(string email);
	void setAge(string age);
	void setDays(double days[]);
	void setDegreeProgram(DegreeProgram d);
	void print();

	// destructor
	~Student();

};
