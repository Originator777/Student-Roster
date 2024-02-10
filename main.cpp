#include <iostream>
#include "roster.h"
#include "student.h"

int main() {
    
    cout << "C867 - Scripting and Programming - Applications" << endl;
    cout << "Language used: C++" << endl;
    cout << "WGU Student ID: 010708648" << endl;
    cout << "Bohdan Kondor" << endl;
    cout << endl;
    cout << endl;
    
    Roster classRoster;

    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 21, 35, 45, 55, SECURITY);
    classRoster.add("A5", "Bohdan", "Kondor", "bkondor@wgu.edu", 21, 47, 43, 19, SOFTWARE);
    
    cout << "All students:" << endl;
    classRoster.printAll();
    cout << endl;

    classRoster.printInvalidEmails();
    cout << endl;

    cout << "Average days in course:" << endl;
    for (int i = 0; i <= classRoster.getLastIndex(); i++) {
        classRoster.printAverageDaysInCourse(classRoster.getClassRosterArray()[i]->getStudentID());
    }
    cout << endl;
    
    cout << "Students by degree program SOFTWARE:" << endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;

    cout << "Removing student with ID A3:" << endl;
    classRoster.remove("A3");
    cout << endl;

    cout << "Students after removal:" << endl;
    classRoster.printAll();
    cout << endl;

    cout << "Removing student with ID A3:" << endl;
    classRoster.remove("A3");

    return 0;
}
