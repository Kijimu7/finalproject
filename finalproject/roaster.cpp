#include "roster.h"
#include "degree.h"
#include<string>
using std::string;



//empty constructor
Roster::Roster()
{
    this->capacity = 0;
    this->lastIndex = -1;//Empty
    this->classRosterArray = nullptr;
}


Roster::Roster(int capcity)
{
    this->capacity = 0;
    this->lastIndex = -1;
    this->classRosterArray = new Student * [capacity];
}



void Roster::parseAdd(string row)
{
    if (lastIndex < capacity) {
        lastIndex++;
        double darray[Student::daysArray];

        if (row[0] == 'A1') {

            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegreeType(SECURITY);
        }
        else if (row[1] == 'A2') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegreeType(NETWORK);
        }
        else if (row[2] == 'A3') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegreeType(SOFTWARE);
        }
        else if (row[3] == 'A4') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegreeType(SECURITY);

        }
        else if (row[4] == 'A5') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegreeType(SOFTWARE);
        }
        else {
            cerr << "INVAILD DEGREE TYPE! EXITING NOW! \n";
            exit(-1);
        }

        //ID
        int rhs = studentData[lastIndex].find(",");
        classRosterArray[lastIndex]->setID(studentData[lastIndex].substr(0, rhs));

        //read firstname
        int lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setFirstname(studentData[lastIndex].substr(lhs, rhs - lhs));

        //read lastname
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setLastname(studentData[lastIndex].substr(lhs, rhs - lhs));

        //read Email
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setEmail(studentData[lastIndex].substr(lhs, rhs - lhs));

        //read Age
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setAge(studentData[lastIndex].substr(lhs, rhs - lhs));

        //read days in course
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[0] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[1] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[2] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        //set the days
        classRosterArray[lastIndex]->setDays(darray);

    }
    else{
        cerr << "Error! List has exceeded maximum capacity! \n exiting now!";
        exit(-1);

    }


}

void Roster::print_All()
{
    for (
        int i = 0; i <= this->lastIndex; i++)(this->classRosterArray)[i]->print();
}
bool Roster::remove(string ID)
{
    bool found = false;
    for (int i = 0; i <= lastIndex; i++)
    {
        if (this->classRosterArray[i]->getID() == ID)
        {
            found = true;

            delete this->classRosterArray[i];
            this->classRosterArray[i] = this->classRosterArray[lastIndex];
            lastIndex--;
        }
       
        
    }

    return found;

}

void Roster::printAverageDays(string studentID)
{
    bool found = false;
    for (int i = 0; i <= lastIndex; i++)
    {
        if (this->classRosterArray[i]->getID() == studentID)
        {
            found = true;
            double* p = classRosterArray[i]->getDays();
            cout << "Average days in course " << classRosterArray << "is" << (p[0] + p[1] + p[2]) / 3;
        }
        if (!found)cout << "Book not found!\n";
    }
}

void Roster::printInvailidDaysEntires()
{
    cout << "Displaying invaild price entries:\n";
    for (int i = 0; i <= lastIndex; i++)
    {
        cout << "Student ID: " << classRosterArray[i]->getID() << ":";
        bool any = false;
        double* p = classRosterArray[i]->getDays();
        for (int j = 0; j < Student::daysArray; j++)
        {
            if (p[j] < 0)
            {
                any = true;
                cout << p[j] << " ";
            }
        }
        if (!any) cout << "NONE";
        cout << "\n";
    }
}


void Roster::printByDegreeType(DegreeType d)
    {
        cout << "Printing degree of type" << degreeTypeString[d] << '\n';
        for (int i = 0; i <= lastIndex; i++) {
            if (this->classRosterArray[i]->getDegreeType() == d) this->classRosterArray[i]->print();
            
            }

        
    }






















