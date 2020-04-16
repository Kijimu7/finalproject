#pragma once
#include <string>
#include "degree.h"
using std::string;

class student

{
public:
	
	const static int daysInCourse = 3;

	//D1. create variables
private:
	string studentId;
	string firstName;
	string lastName;
	string Email;
	int Age;
	int* days;
	degreeProgram dProgram;


public:
	student(); // empty constructor
	
	//full constractor
	student(string ID, string firstName, string lastName, string email, int Age, int days[], degreeProgram type);

	//create function getter
	string getStudentId();
	string getFirstname();
	string getLastname();
	string getEmail();
	int getAge();
	int* getDays();
	virtual degreeProgram getdegreeProgram() = 0;

	//create setter
	void setStudentId(string StudentID);
	void setFirstname(string firstname);
	void setLastname(string lastname);
	void setEmail(string email);
	void setAge();
	void setDays(int days[]);
	void setdegreeProgram(degreeProgram d);
	void print();

	// destructor
	~student();


};
