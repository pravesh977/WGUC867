//
//  student.h
//  C867Project
//
//  Created by Pravesh Shrestha on 8/12/20.
//  Copyright © 2020 Pravesh Shrestha. All rights reserved.
//

#ifndef student_h
#define student_h
#include "degree.h"

//Task D: Creating class Student in file student.h
#include <string>
using namespace std;

class Student {
    
public:
    //Task D.2.b Creating Setters/Mutators for each instance variable
    void SetStudentId (int studentId);
    void SetStudentFirstName (string fname);
    void SetStudentLastName (string lname);
    void SetStudentEmailAddress (string emailid);
    void SetStudentAge(int ageInYears);
    void SetCourseDays(int CourseDays[]); //FIXME HOW TO ARRAYS
    void SetDegreeProgram(DegreeProgram degProg); //FIXME: POSSIBLY USER ENUMERATION
    
    
    Student(); // Empty Constructor D.2.d
    Student(string studentId, string fName, string lName, string emailId,int studentAge, int courseDays[], DegreeProgram degProg); // Full Constructor D.2.d
    
    
    //Task D.2.a Creating Accessors/Getters for each instance variable
    string GetStudentId () const;
    string GetStudentFirstName () const;
    string GetStudentLastName () const;
    string GetStudentEmailAddress () const;
    int GetStudentAge() const;
    int* GetCourseDays() const; //FIXME HOW TO ARRAYS
    DegreeProgram GetDegreeProgram() const; //FIXME: POSSIBLY USER ENUMERATION
    
    void PrintStudentData() const; //D.2.e
    
    
private:
    //Task D.1 creating variables in sfile student.h
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int studentAge;
    int* courseDays; //FIXME ARRAYS
    DegreeProgram degreeProgram; //FIXME PROBABLY USE ENUMERATION
    const int courseDaysSize = 3;
};

#endif /* student_h */
