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

const int numStudents = 5;
const string studentData[numStudents] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",                        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Pravesh,Shrestha,hello@gmail.com,33,40,45,50,SOFTWARE"};

//Defining Constructors and Member functions of Roster class
Roster::Roster(){
    this->capacity = 0;
    this->lastIndex = -1; //Can't use 0 because that is the first element and -1 sets it to empty.
    this->student = nullptr;
};

Roster::Roster(int capacity){ //setting the max capacity of repository
    this->capacity = capacity;
    this->lastIndex = -1;
    this->student = new Student*[capacity]; //Creates an array of pointers to each student
};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgramType degreeprogram){
    
};





//Destructor FIXME
Roster::~Roster(){
    
};
