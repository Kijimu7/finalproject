#include <iostream>
#include<iomanip>
#include"student.h"
using std::string;
using std::cout;
using std::left;
using std::setw;
using std::cerr;

using namespace std;


Student::Student() //Empty constructor

{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->Email = "";
	this->age = "";
	this->days = new double[daysArray];
	for (int i = 0; i < daysArray; i++) this->days[i] = 0;
	this->dtype = DegreeType::UNDECIDED;
}

//full constructor
Student::Student(string ID, string firstName, string lastName, string email, int Age, double days[], DegreeType type)
{
	this->studentID = ID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->Email = Email;
	this->age = age;
	this->days = new double[daysArray];
	for (int i = 0; i < 3; i++) this->days[i] = days[i];
	this->dtype = type;
}

Student::Student(string ID, string firstName, string lastName, string email, string age, double days[], DegreeType type)
{
}

//getters
string Student::getID()
{
	return studentID;
}

string Student::getFirstname()
{
	return firstName;
}
string Student::getLastname()
{
	return lastName;
}
string Student::getEmail()
{
	return Email;
}

string Student::getAge()
{
	return age;
}

double* Student::getDays()
{
	return days;
}

DegreeType Student::getDegreeType()
{
	return dtype;
}

//Setters
void Student::setID(string ID)
{
	studentID = ID;
}

void Student::setFirstname(string firstname)
{
	this->firstName = firstName;
}

void Student::setLastname(string lastname)
{
	this->lastName = lastName;
}

void Student::setEmail(string email)
{
	this->Email = Email;
}

void Student::setAge(string age)
{
	this->age = age;
	
}

void Student::setDays(double days[])
{
	for (int i = 0; i < 3; i++) this->days[i] = days[i];
	
}
void Student::setDegreeType(DegreeType d)
{
	this->dtype = d;
}

void Student::print()
{
	cout << left << setw(5) << studentID;
	cout << left << setw(10) << firstName;
	cout << left << setw(10) << lastName;
	cout << left << setw(30) << Email;
	cout << left << setw(5) << age;
	cout << left << setw(10) << days[0];
	cout << left << setw(10) << days[1];
	cout << left << setw(10) << days[2];
	cout << left << setw(10) << degreeTypeString[getDegreeType()];
	
}

Student::~Student()
{
	if (days != nullptr) {
		delete[] days;
		days = nullptr;
	}
}