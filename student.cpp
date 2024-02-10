#include <iostream>
#include "student.h"

Student::Student(const string& id, const string& fName, const string& lName,
                 const string& email, int studentAge, const int days[3],
                 DegreeProgram program)
    : studentID(id), firstName(fName), lastName(lName), emailAddress(email),
      age(studentAge), degreeProgram(program) {
    for (int i = 0; i < 3; i++) {
        daysToCompleteCourses[i] = days[i];
    }
}

string Student::getStudentID() const {
    return studentID;
}

string Student::getFirstName() const {
    return firstName;
}

string Student::getLastName() const {
    return lastName;
}

string Student::getEmailAddress() const {
    return emailAddress;
}

int Student::getAge() const {
    return age;
}

const int* Student::getDaysToCompleteCourses() const {
    return daysToCompleteCourses;
}

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

void Student::setStudentID(const string& id) {
    studentID = id;
}

void Student::setFirstName(const string& fName) {
    firstName = fName;
}

void Student::setLastName(const string& lName) {
    lastName = lName;
}

void Student::setEmailAddress(const string& email) {
    emailAddress = email;
}

void Student::setAge(int studentAge) {
    age = studentAge;
}

void Student::setDaysToCompleteCourses(const int days[3]) {
    for (int i = 0; i < 3; i++) {
        daysToCompleteCourses[i] = days[i];
    }
}

void Student::setDegreeProgram(DegreeProgram program) {
    degreeProgram = program;
}

void Student::print() const {
    cout << "ID: " << studentID << " " << '\t';
    cout << "Name: " << firstName << " " << lastName << " " << '\t';
    cout << "Email: " << emailAddress << " " << '\t';
    cout << "Age: " << age << " " << '\t';
    cout << "{" << daysToCompleteCourses[0] << ", " << daysToCompleteCourses[1] << ", " << daysToCompleteCourses[2] << "}" << " " << '\t';
    cout << "Degree Program: ";
    switch (degreeProgram) {
        case SECURITY:
            cout << "SECURITY" << endl;
            break;
        case NETWORK:
            cout << "NETWORK" << endl;
            break;
        case SOFTWARE:
            cout << "SOFTWARE" << endl;
            break;
        default:
            cout << "INVALID" << endl;
    }
    cout << endl;
}
