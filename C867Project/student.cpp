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

void Student::SetCourseDays(vector<int> CourseDays){
    //FIXME
}; //FIXME HOW TO ARRAYS
void Student::SetDegreeProgram(int degreeprog){
    //FIXME
}; //FIXME: POSSIBLY USER ENUMERATION
Student::Student(){
    //Maybe user construct member initialization for array?
    studentId = "Student ID";
    firstName = "First Name";
    lastName = "Last Name";
    emailAddress = "Email ID";
    studentAge = 0;
    courseDays = 0;
    degreeProgram = "Random"; //FIXME PROBABLY USE ENUMERATION
}; // Constructor D.2.d
    
    //Task D.2.a Creating Accessors/Getters for each instance variable
string Student::GetStudentId (int studentId) const{
    //FIXME
    
    return "studentId"; //FIXME FILLER
};
    string Student::GetStudentFirstName (string fname) const{
        //FIXME
        return "studentId"; //FIXME FILLER
    };
    string Student::GetStudentLastName (string lname) const{
        //FIXME
        return "studentId"; //FIXME FILLER
    };
    string Student::GetStudentEmailAddress (string emailid) const{
        //FIXME
        return "studentId"; //FIXME FILLER
    };
    int Student::GetStudentAge(int ageInYears) const{
        //FIXME
        return 000; //FIXME FILLER
    };
    int Student::GetCourseDays(vector<int> CourseDays) const{
        //FIXME
        return 000; //FIXME FILLER
    }; //FIX ME HOW TO ARRAYS
    int Student::GetDegreeProgram(int degreeprog) const{
        //FIXME
        return 000; //FIXME FILLER
    }; //FIX ME: POSSIBLY USER ENUMERATION
    void Student::PrintStudentData() const{
        //FIXME
        cout <<"printing student data";
    }; //D.2.e PRINT SPECIFIC STUDENT DATA
    
