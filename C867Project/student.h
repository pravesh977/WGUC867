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


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


//Task D: Creating class Student in file student.h
class Student {
    
public:
    //Task D.2.b Creating Setters/Mutators for each instance variable
    void SetStudentId (string studentId);
    void SetStudentFirstName (string fname);
    void SetStudentLastName (string lname);
    void SetStudentEmailAddress (string emailid);
    void SetStudentAge(int ageInYears);
    void SetCourseDays(int CourseDays[]);
    void SetDegreeProgram(DegreeProgramType degProg);
    
    // Empty Constructor D.2.d
    Student();
    
     // Full Constructor D.2.d
    Student(string studentId, string fName, string lName, string emailId,int studentAge, int courseDays[], DegreeProgramType degProg);
    
    //Task F5 Destructor
    ~Student();
    
    
    //Task D.2.a Creating Accessors/Getters for each instance variable
    string GetStudentId () const;
    string GetStudentFirstName () const;
    string GetStudentLastName () const;
    string GetStudentEmailAddress () const;
    int GetStudentAge() const;
    int* GetCourseDays();
    DegreeProgramType GetDegreeProgram() const;
    
    
    //Task D.2.e Print specific student data
    void PrintStudentData() const;
    
    
private:
    //Task D.1 creating variables in file student.h
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int studentAge;
    int *courseDays;
    DegreeProgramType degreeProgram;
    const int courseDaysSize = 3;
};


#endif /* student_h */
