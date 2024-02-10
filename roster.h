#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include "student.h"

class Roster {
private:
    static const int MAX_STUDENTS = 5;
    int lastIndex;
    Student* classRosterArray[MAX_STUDENTS];
    int findStudentIndex(string studentID) const;

public:
    Roster();

    ~Roster();
    
    Student** getClassRosterArray();

    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll() const;
    void printAverageDaysInCourse(string studentID) const;
    void printInvalidEmails() const;
    void printByDegreeProgram(DegreeProgram degreeProgram) const;
    int getLastIndex() const;
};

#endif

