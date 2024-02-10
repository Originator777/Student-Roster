#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
private:

    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourses[3];
    DegreeProgram degreeProgram;

public:
    
    Student(const string& studentID, const string& firstName, const string& lastName,
            const string& emailAddress, int age, const int daysToCompleteCourses[3],
            DegreeProgram degreeProgram);
    
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    const int* getDaysToCompleteCourses() const;
    DegreeProgram getDegreeProgram() const;

    void setStudentID(const string& id);
    void setFirstName(const string& firstName);
    void setLastName(const string& lastName);
    void setEmailAddress(const string& emailAddress);
    void setAge(int age);
    void setDaysToCompleteCourses(const int days[3]);
    void setDegreeProgram(DegreeProgram program);
    void print() const;
};

#endif
