/*
APStudentData.cpp
Ayush Prakash
3/3/2023
Student Data
*/


#include <iostream>
#include <string>
using namespace std;

enum Program { CSCI, DBMS, INFM, SDEV };

struct Name {
    string first_name;
    char middle_initial;
    string last_name;
};

struct Student {
    Name name;
    int id;
    string email;
    string ssn;
    Program program;
};

int main() {
    const int MAX_STUDENTS = 5;
    Student students[MAX_STUDENTS];

    // Input student information
    for (int i = 0; i < MAX_STUDENTS; i++) {
        cout << "Enter information for student #" << i + 1 << endl;

        // Name
        cout << "First Name: ";
        cin >> students[i].name.first_name;

        cout << "Middle Initial: ";
        cin >> students[i].name.middle_initial;

        cout << "Last Name: ";
        cin >> students[i].name.last_name;

        // ID
        cout << "ID: ";
        cin >> students[i].id;

        // Email
        cout << "Email: ";
        cin >> students[i].email;

        // SSN
        cout << "SSN: ";
        cin >> students[i].ssn;

        // Program
        int program_choice;
        cout << "Program: (0) CSCI, (1) DBMS, (2) INFM, (3) SDEV" << endl;
        cin >> program_choice;
        students[i].program = static_cast<Program>(program_choice);

        cout << endl;
    }

    // Output student information
    for (int i = 0; i < MAX_STUDENTS; i++) {
        cout << "Information for student #" << i + 1 << endl;
        cout << "Name: " << students[i].name.first_name << " "
            << students[i].name.middle_initial << ". "
            << students[i].name.last_name << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Email: " << students[i].email << endl;
        cout << "SSN: " << students[i].ssn << endl;
        cout << "Program: ";
        switch (students[i].program) {
        case CSCI:
            cout << "CSCI" << endl;
            break;
        case DBMS:
            cout << "DBMS" << endl;
            break;
        case INFM:
            cout << "INFM" << endl;
            break;
        case SDEV:
            cout << "SDEV" << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}
