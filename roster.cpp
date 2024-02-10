#include "roster.h"
#include <iostream>

Roster::Roster() {
    lastIndex = -1;
}

Roster::~Roster() {
    for (int i = 0; i <= lastIndex; i++) {
        delete classRosterArray[i];
    }
}

int Roster::findStudentIndex(string studentID) const {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            return i;
        }
    }
    return -1;
}

int Roster::getLastIndex() const {
    return lastIndex;
}

Student** Roster::getClassRosterArray() {
    return classRosterArray;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int daysToCompleteCourses[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    lastIndex++;
    classRosterArray[lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysToCompleteCourses, degreeProgram);
}

void Roster::remove(string studentID) {
    int index = findStudentIndex(studentID);
    if (index != -1) {
        delete classRosterArray[index];
        
        classRosterArray[index] = classRosterArray[lastIndex];
        lastIndex--;
        cout << "Student with ID " << studentID << " removed" << endl;
    } else {
        cout << "Student with ID " << studentID << " not found" << endl;
    }
}

void Roster::printAll() const {
    for (int i = 0; i <= lastIndex; i++) {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) const {
    int index = findStudentIndex(studentID);
    if (index != -1) {
        const int* days = classRosterArray[index]->getDaysToCompleteCourses();
        int averageDays = (days[0] + days[1] + days[2]) / 3;
        cout << "Student with ID " << studentID << ": " << averageDays << endl;
    } else {
        cout << "Error: Student with ID " << studentID << " not found" << endl;
    }
}

void Roster::printInvalidEmails() const {
    cout << "Invalid email addresses:" << endl;
    for (int i = 0; i <= lastIndex; i++) {
        string email = classRosterArray[i]->getEmailAddress();
        if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
            cout << email << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}
