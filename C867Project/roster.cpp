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
        DegreeProgramType paramdegree;
        lastIndex++; //incrementing from -1
        int cArray[Student::courseDaysSize]; //creating an array to hold the number of days
        
        //CHECKING THE LAST VALUE OF THE STRING AND SETTING DEGREE PROGRAM VALUE AND ALSO CREATING NEW OBJECTS
        
        if (row.back() == 'Y') {
            this->classRosterArray[lastIndex] = new Student();
            //classRosterArray[lastIndex]->SetDegreeProgram(SECURITY);
            paramdegree = SECURITY;
        }
        
        else if (row.back() == 'K') {
            this->classRosterArray[lastIndex] = new Student();
            //classRosterArray[lastIndex]->SetDegreeProgram(NETWORK);
            paramdegree = NETWORK;
        }
        
        else if (row.back() == 'E') {
            this->classRosterArray[lastIndex] = new Student();
            //classRosterArray[lastIndex]->SetDegreeProgram(SOFTWARE);
            paramdegree = SOFTWARE;
        }
        
        
        //exit if the last value of string dont match
        else {
            cerr << "Invalid book type. Closing program now."<< endl;
            exit(-1);
        }
        
        
        //Parsing and then setting each field
        
        //For studentId
        int rhs = studentData[lastIndex].find(",");
        //classRosterArray[lastIndex]->SetStudentId(studentData[lastIndex].substr(0, rhs));
        string paramid = studentData[lastIndex].substr(0, rhs);
        
        //For firstName
        int lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        //classRosterArray[lastIndex]->SetStudentFirstName(studentData[lastIndex].substr(lhs, rhs - lhs));
        string paramfname = studentData[lastIndex].substr(lhs, rhs - lhs);
        
        //For lastName
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        //classRosterArray[lastIndex]->SetStudentLastName(studentData[lastIndex].substr(lhs, rhs - lhs));
        string paramlname = studentData[lastIndex].substr(lhs, rhs - lhs);
        
        //For emailAddress
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        //classRosterArray[lastIndex]->SetStudentEmailAddress(studentData[lastIndex].substr(lhs, rhs - lhs));
        string paramemail = studentData[lastIndex].substr(lhs, rhs - lhs);
        
        //For studentAge //also converted string to int using stoi
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        //classRosterArray[lastIndex]->SetStudentAge(stoi(studentData[lastIndex].substr(lhs, rhs - lhs)));
        int paramage = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
        
        //For first courseDays
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        //cArray[0] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
        int paramfirstday = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
        
        //For second courseDays
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        //cArray[1] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
        int paramsecondday = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
               
        //For third courseDays
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        //cArray[2] = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
        int paramthirdday = stoi(studentData[lastIndex].substr(lhs, rhs - lhs));
               
        //For courseDays Array/ setting up courseDays with temporary array cArray
        //classRosterArray[lastIndex]->SetCourseDays(cArray);
        
        //calling function add with the arguments
        add(paramid, paramfname, paramlname, paramemail, paramage, paramfirstday, paramsecondday, paramthirdday, paramdegree);
    }
    
    else {
        cerr<< "Error! list exceeds max capacity, shutting down program" << endl;
        exit(-1);
    }
    
    
    //for studentId
    //int rhs = studentData[lastIndex].find(",");
    //classRosterArray[lastIndex]
}


//Task E.3.a
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgramType degreeprogram) {
    classRosterArray[lastIndex]->SetStudentId(studentID);
    classRosterArray[lastIndex]->SetStudentFirstName(firstName);
    classRosterArray[lastIndex]->SetStudentLastName(lastName);
    classRosterArray[lastIndex]->SetStudentEmailAddress(emailAddress);
    classRosterArray[lastIndex]->SetStudentAge(age);
    
    //creating a temporary array to hold parameter of 3 days
    int cArray[Student::courseDaysSize];
    cArray[0] = daysInCourse1;
    cArray[1] = daysInCourse2;
    cArray[2] = daysInCourse3;
    classRosterArray[lastIndex]->SetCourseDays(cArray);
    classRosterArray[lastIndex]->SetDegreeProgram(degreeprogram);
};

//Task E.3.b
void Roster::remove(string studentID){
    cout << endl;
    cout << "Finding the Student with ID " << studentID << " and deleting it." << endl;
    bool idFound = false;
    //cout << lastIndex << " LAST INEX IS " << endl;
    //cout <<numStudents <<" num student is " << endl;
    for (int i = 0; i < lastIndex; ++i) {
        if (classRosterArray[i]->GetStudentId() == studentID) {
            idFound = true;
            //deleting the student from the roster;
            delete this->classRosterArray[i];
            //Moving last element to this deleted index and decrementing the array size to plug gap
            this->classRosterArray[i] = this->classRosterArray[lastIndex];
            lastIndex--;
        }
    }
    if (idFound == false) {
            cout << "ID " << studentID << " is not found!!!" << endl;
    }
};

//Task E.3.c
void Roster::printAll(){
    cout << endl;
    for (int i = 0; i <= this->lastIndex; ++i) {
        this->classRosterArray[i]->PrintStudentData();
    }
}

//Task E.3.d
void Roster::printAverageDaysInCourse(){
    cout << "Printing Average Days in Course" << endl;
    for (int i = 0; i < numStudents; ++i) {
        int averageDays = 0;
        //creating a pointer that points towards current object's courseDays array
        int* mypointer = classRosterArray[i]->GetCourseDays();
        averageDays = (mypointer[0] + mypointer[1] + mypointer[2]) / 3;
        cout << "Student with ID " << classRosterArray[i]->GetStudentId() << " requires  "<<averageDays <<" days."<< endl;
    }
}

//Task E.3.e
void Roster::printInvalidEmails(){
    cout << endl;
    cout << "Printing Invalid Email Addresses" << endl;
    //Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    
    for (int i = 0; i < numStudents; ++i) {
        bool atPresent;
        bool periodPresent;
        bool spacePresent;
        string emailmessage; //Creating a message to display what is wrong with email address
        //cout << " this is ethe eemail of 2  " << this->classRosterArray[i]->GetStudentEmailAddress() << endl;
        string emailid = this->classRosterArray[i]->GetStudentEmailAddress();
        atPresent = true;
        periodPresent = true;
        spacePresent = false;
        
        //looking for @
        size_t foundAt = emailid.find('@');
        if (foundAt == string::npos) {
            atPresent = false;
            emailmessage = " @ is not found!";
        }
        
        //looking for '.'
        size_t foundPeriod = emailid.find('.');
        if (foundPeriod == string::npos) {
            periodPresent = false;
            emailmessage = " . is not found!";
        }
        
        //looking for ' '
        size_t foundSpace = emailid.find(' ');
        if (foundSpace != string::npos) {
            spacePresent = true;
            emailmessage = " space is not allowed!";
            //cout << "email with shapce " <<emailid << endl;
        }
        
        //checking to see if all conditions match
        if ( (atPresent == false ) || (periodPresent == false) || (spacePresent == true) ) {
            cout << emailid << emailmessage << endl;
        }
    }
    cout << endl;
}


//Task E.3.f
void Roster::printByDegreeProgram(DegreeProgramType degreeProgram){
    //cout << "param is " << degreeProgram << endl;
    cout << endl;
    string chosenprogram;
    if (degreeProgram == 0){
        chosenprogram = "Security";
    }
    else if (degreeProgram == 1){
        chosenprogram = "Networking";
    }
    else
    {
        chosenprogram = "Software";
    }
    cout << "The list of students who are enrolled in " << chosenprogram << endl;
    //loop through the student objects and if parameter degreeprogram matches the student object's degreeprogram, print that/current student
    for (int i = 0; i < numStudents; ++i) {
        if (degreeProgram == classRosterArray[i]->GetDegreeProgram()){
            classRosterArray[i]->PrintStudentData();
        }
    }
};

//Destructor FIXME
//Roster::~Roster(){
    
//};
