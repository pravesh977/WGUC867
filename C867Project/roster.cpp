//
//  roster.cpp
//  C867Project
//
//  Created by Pravesh Shrestha on 8/12/20.
//  Copyright © 2020 Pravesh Shrestha. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "roster.h"

using namespace std;



//Defining Constructors and Member functions of Roster class
Roster::Roster(){
    this->capacity = 0;
    this->lastIndex = -1; //Can't use 0 because that is the first element and -1 sets it to empty.
    this->classRosterArray = nullptr;
};

Roster::Roster(int capacity){ //setting the max capacity of repository
    this->capacity = capacity;
    this->lastIndex = -1;
    this->classRosterArray = new Student*[capacity]; //Creates an array of pointers to each student object
};


//Populating Roster Function
void Roster::rosterPopulate(string row){
    if (lastIndex < capacity) {
        lastIndex++; //incrementing from -1
        int cArray[Student::courseDaysSize]; //creating an array to hold the number of days
        
        //CHECKING THE LAST VALUE OF THE STRING AND SETTING DEGREE PROGRAM VALUE AND ALSO CREATING NEW OBJECTS
        if (row.back() == 'Y') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->SetDegreeProgram(SECURITY);
        }
        
        else if (row.back() == 'K') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->SetDegreeProgram(NETWORK);
        }
        
        else if (row.back() == 'E') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->SetDegreeProgram(SOFTWARE);
        }
        
        
        //exit if the last value of string dont match
        else {
            cerr << "Invalid book type. Closing program now."<< endl;
            exit(-1);
        }
        
        
        //Parsing and then setting each field
        
        //For studentId
        int rhs = studentData[lastIndex].find(",");
        classRosterArray[lastIndex]->SetStudentId(studentData[lastIndex].substr(0, rhs));
        
        //For firstName
        int lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->SetStudentFirstName(studentData[lastIndex].substr(lhs, rhs - lhs));
        
        //For lastName
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->SetStudentLastName(studentData[lastIndex].substr(lhs, rhs - lhs));
        
        //For emailAddress
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->SetStudentEmailAddress(studentData[lastIndex].substr(lhs, rhs - lhs));
        
        //For studentAge //also converted string to int using stoi
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->SetStudentAge(stoi(studentData[lastIndex].substr(lhs, rhs - lhs)));
        
        //For first courseDays
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        cArray[0] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
        
        //For second courseDays
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        cArray[1] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
               
        //For third courseDays
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        cArray[2] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
               
        //For courseDays Array
        classRosterArray[lastIndex]->SetCourseDays(cArray);

    }
    
    else {
        cerr<< "Error! list exceeds max capacity, shutting down program" << endl;
        exit(-1);
    }
    
    
    //for studentId
//    int rhs = studentData[lastIndex].find(",");
//    classRosterArray[lastIndex]
}



void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgramType degreeprogram){
    
};

void Roster::printAll(){
    cout <<"heyheyhey" << endl;
}

//E.  Create a Roster class (roster.cpp) by doing the following:
//
//1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
//
//2.  Create a student object for each student in the data table and populate classRosterArray.
//
//a.  Parse each set of data identified in the “studentData Table.”
//
//b.  Add each student object to classRosterArray.
//


//Destructor FIXME
//Roster::~Roster(){
    
//};
