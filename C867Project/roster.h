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


//TASK E. Creating Roster class
class Roster{
    
public:
    //Default Constructor
    Roster();
    
    Roster(int capacity);
    //E.3.a
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgramType degreeprogram);
    
    //E.3.b
    void remove(string studentID);
    
    //E.3.c
    void printAll();
    
    //E.3.d
    void printAverageDaysInCourse(string studentID);
    
    //E.3.e
    void printInvalidEmails();
    
    //E.3.f
    void printByDegreeProgram(DegreeProgramType degreeProgram);
    
    //Destructor
    ~Roster();
    
private:
    
    int lastIndex;
    int capacity;
    Student** student;
    
};

#endif /* roster_h */
