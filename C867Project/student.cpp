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
    
void Student::SetStudentId (int studentId){
    //FIXME
};
void Student::SetStudentFirstName (string fname){
    //FIXME
};
void Student::SetStudentLastName (string lname){
    //FIXME
};
void Student::SetStudentEmailAddress (string emailid){
    //FIXME
};
void Student::SetStudentAge(int ageInYears){
    //FIXME
};

void Student::SetCourseDays(int CourseDays[]){
    //FIXME
}; //FIXME HOW TO ARRAYS
void Student::SetDegreeProgram(DegreeProgram degProg){
   //FIXME
}; //FIXME: POSSIBLY USER ENUMERATION


Student::Student(){ //Default constructor member function
    this->studentId = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->studentAge = 0;
    this->courseDays = new int[courseDaysSize];
    for (int i = 0; i < courseDaysSize; ++i) {
        courseDays[i] = 0;
    }
    this->degreeProgram = SECURITY; //FIXME PROBABLY USE ENUMERATION
}; // Constructor D.2.d

    //Full Constructor
Student::Student(string Id, string fName, string lName, string emailId, int age, int coursesInDays[], DegreeProgram degProg){ //Default constructor member function
    this->studentId = Id;
    this->firstName = fName;
    this->lastName = lName;
    this->emailAddress = emailId;
    this->studentAge = age;
    this->courseDays = new int[courseDaysSize];
    for (int i = 0; i < courseDaysSize; ++i) {
        courseDays[i] = coursesInDays[i];
    }
    this->degreeProgram = degProg; //FIXME PROBABLY USE ENUMERATION
};

    //Task D.2.a Creating Accessors/Getters for each instance variable
string Student::GetStudentId () const{
    //FIXME
    
    return "studentId"; //FIXME FILLER
};
    string Student::GetStudentFirstName () const{
        //FIXME
        return "studentId"; //FIXME FILLER
    };
    string Student::GetStudentLastName () const{
        //FIXME
        return "studentId"; //FIXME FILLER
    };
    string Student::GetStudentEmailAddress () const{
        //FIXME
        return "studentId"; //FIXME FILLER
    };
    int Student::GetStudentAge() const{
        //FIXME
        return 000; //FIXME FILLER
    };
    int* Student::GetCourseDays() const{
        //FIXME
        return 000; //FIXME FILLER
    }; //FIX ME HOW TO ARRAYS
    DegreeProgram Student::GetDegreeProgram() const{
        return SECURITY;//FIXME
        ; //FIXME FILLER
    }; //FIX ME: POSSIBLY USER ENUMERATION
    void Student::PrintStudentData() const{
        //FIXME
        cout <<"printing student data" << endl;
        //youtube part 4 chapter video 4 part 2
        //FIXME ENUM GETDEGREEPROGRAM
        cout << studentId << " " << firstName << " " << lastName << " " << emailAddress << " " << studentAge << " " <<courseDays[0] << " " << courseDays[1] << " " << courseDays[2] << GetDegreeProgram();
    }; //D.2.e PRINT SPECIFIC STUDENT DATA
    
