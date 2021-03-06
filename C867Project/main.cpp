//
//  main.cpp
//  C867Project
//
//  Created by Pravesh Shrestha on 8/12/20.
//  Copyright © 2020 Pravesh Shrestha. All rights reserved.
//

#include <iostream>
using namespace std;

#include "student.h"
#include "roster.h"

//YAY
int main() {
    //TASK F.1 PERSONAL INFORMATION PRINT
    cout << "Scripting And Programming - Applications" << endl;
    cout << "Programming Language - C++" << endl;
    cout << "Student ID - 000870229" << endl;
    cout << "Student Name - Pravesh Shrestha" << endl;
    
    cout << endl;

    
  /*
    //CALLING Empty and FULL CONSTRUCTOR
    //Delete later
    int myaray[3] = {55,88,66};
    Student boi1;
    cout << "this is default constructor result" << endl;
    boi1.PrintStudentData();
    Student boi2("A1", "pravesh", "shrestha", "mei@mfia.com", 33, myaray, NETWORK);
    cout << "this is full constructor result" << endl;
    boi2.PrintStudentData();
    
   */
    
    /*
    //Working but need to work through add function
    Roster* classRoster = new Roster(numStudents);
    cout << "Parsing data" << endl;
    for (int i = 0; i < numStudents; ++i) {
        classRoster->rosterPopulate(studentData[i]);
    }
    
    classRoster->printAll();
    */
 
    Roster* classRoster;
    classRoster = new Roster(numStudents);
    for (int i = 0; i < numStudents; ++i) {
        classRoster->rosterPopulate(studentData[i]);
    }
    classRoster->printAll();
    classRoster->printInvalidEmails();
    
    for (int i = 0; i < numStudents; ++i) {
        string studentID = classRoster->classRosterArray[i]->GetStudentId();
        classRoster->printAverageDaysInCourse(studentID);
    }

    classRoster->printByDegreeProgram(SOFTWARE);
    (*classRoster).remove("A3");
    classRoster->printAll();
    classRoster->remove("A3");
   
    return 0;
}

