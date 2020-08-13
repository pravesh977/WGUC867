//
//  student.h
//  C867Project
//
//  Created by Pravesh Shrestha on 8/12/20.
//  Copyright © 2020 Pravesh Shrestha. All rights reserved.
//

#ifndef student_h
#define student_h


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
    void SetCourseDays(vector<int> CourseDays); //FIXME HOW TO ARRAYS
    void SetDegreeProgram(int degreeprog); //FIXME: POSSIBLY USER ENUMERATION
    Student(); // Constructor D.2.d
    
    //Task D.2.a Creating Accessors/Getters for each instance variable
    string GetStudentId (int studentId) const;
    string GetStudentFirstName (string fname) const;
    string GetStudentLastName (string lname) const;
    string GetStudentEmailAddress (string emailid) const;
    int GetStudentAge(int ageInYears) const;
    int GetCourseDays(vector<int> CourseDays) const; //FIXME HOW TO ARRAYS
    int GetDegreeProgram(int degreeprog) const; //FIXME: POSSIBLY USER ENUMERATION
    void PrintStudentData() const; //D.2.e
    
private:
    //Task D.1 creating variables in sfile student.h
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int studentAge;
    int courseDays; //FIXME ARRAYS
    string degreeProgram; //FIXME PROBABLY USE ENUMERATION
};

#endif /* student_h */
