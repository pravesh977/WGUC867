//
//  student.cpp
//  C867Project
//
//  Created by Pravesh Shrestha on 8/12/20.
//  Copyright © 2020 Pravesh Shrestha. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
#include "student.h"

    //Setters/Mutators
void Student::SetStudentId (string studentId){
    this->studentId = studentId;
};
void Student::SetStudentFirstName (string fname){
    this->firstName = fname;
};
void Student::SetStudentLastName (string lname){
    this->lastName = lname;
};
void Student::SetStudentEmailAddress (string emailid){
    this->emailAddress = emailid;
};
void Student::SetStudentAge(int ageInYears){
    this->studentAge = ageInYears;
};

void Student::SetCourseDays(int courseDays[]){
    this->courseDays = new int[courseDaysSize];
    for (int i = 0; i < courseDaysSize; ++i) {
        this->courseDays[i] = courseDays[i];
    }
};
void Student::SetDegreeProgram(DegreeProgramType degProg){
    this->degreeProgram = degProg;
};


//TASK D.2.d Default constructor member function
Student::Student(){
    this->studentId = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->studentAge = 0;
    //Dynamically creating arrays for pointer courseDays
    this->courseDays = new int[courseDaysSize];
    for (int i = 0; i < courseDaysSize; ++i) {
        courseDays[i] = 0;
    }
    this->degreeProgram = SECURITY;
};

//Full Constructor
Student::Student(string Id, string fName, string lName, string emailId, int age, int coursesInDays[], DegreeProgramType degProg){
    this->studentId = Id;
    this->firstName = fName;
    this->lastName = lName;
    this->emailAddress = emailId;
    this->studentAge = age;
    //"new" will create 3 new int type of array and return a pointer. we then set that return value to a pointer courseDays (member integer variable/object variable) which will point to that new dynamically created array.
    this->courseDays = new int[courseDaysSize];
    //cout <<" cousreDays aftrew new is " << courseDays<< endl;
    for (int i = 0; i < courseDaysSize; ++i) {
        courseDays[i] = coursesInDays[i];
        //cout << &courseDays[i] << endl;
    }
    this->degreeProgram = degProg;
};

    //Task D.2.a Creating Accessors/Getters for each instance variable
    string Student::GetStudentId () const{
        return studentId;
    };
    string Student::GetStudentFirstName () const{
        return firstName;
    };
    string Student::GetStudentLastName () const{
        return lastName;
    };
    string Student::GetStudentEmailAddress () const{
        return emailAddress;
    };
    int Student::GetStudentAge() const{
        return studentAge;
    };
    int* Student::GetCourseDays(){
        return courseDays;
    };
    DegreeProgramType Student::GetDegreeProgram() const{
        return degreeProgram;
    };

    //Task D.2.e PRINT SPECIFIC STUDENT DATA
    void Student::PrintStudentData() const{
        //cout <<"printing student data" << endl;
        
        
        cout << left << setw(5) << studentId;
        cout << left << setw(15) << firstName;
        cout << left << setw(15) << lastName;
        cout << left << setw(25) << emailAddress;
        cout << left << setw(10) << studentAge;
        cout << left << setw(10) << courseDays[0];
        cout << left << setw(10) << courseDays[1];
        cout << left << setw(10) << courseDays[2];
         //For degree program enumeration creating if condition to display correct text
        if (degreeProgram == 0) {
        cout << left << setw(20) << "Security";
        }
        else if (degreeProgram == 1) {
        cout << left << setw(20) << "Network";
        }
        else {
        cout << left << setw(20) << "Software";
        }
        cout << endl;
    };
    
//Task F5 Destructor
Student::~Student() {
    if (courseDays != nullptr) {
        delete [] courseDays;
        courseDays = nullptr;
    }
};
