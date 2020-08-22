//
//  roster.h
//  C867Project
//
//  Created by Pravesh Shrestha on 8/12/20.
//  Copyright © 2020 Pravesh Shrestha. All rights reserved.
//

#ifndef roster_h
#define roster_h
#include "student.h"
using namespace std;


const int numStudents = 5;
const string studentData[numStudents] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",                        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Pravesh,Shrestha,hello@gmail.com,33,40,45,50,SOFTWARE"};


//TASK E. Creating Roster class
class Roster{
    
public:
    //Default Constructor
    Roster();
    
    Roster(int capacity);

    //Populating Roster Function
    void rosterPopulate(string row);

    //E.3.a
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgramType degreeprogram);
    
    //E.3.b
    void remove(string studentID);
    
    //E.3.c
    void printAll();
    
    //Task E.3.d
    void printAverageDaysInCourse();
    
    //Task E.3.e
    void printInvalidEmails();
    
    //Task E.3.f
    void printByDegreeProgram(DegreeProgramType degreeProgram);
    

    //Destructor
    //~Roster();
    
private:
    
    int lastIndex; //index of last student in the roster
    int capacity; //maximum size of the roster
    
    //E.1 Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
    Student** classRosterArray;//classRosterArray is a pointer to
    //int *courseDays;
};

#endif /* roster_h */
