/*
M03 Lecture Lab Activity 1.cpp
Ayush Prakash
1/31/2023
write a program which prompts the user to enter five test scores, then computes the test average and overall grade.
*/

#include <iostream>

using namespace std;

int main() {
    float score1, score2, score3, score4, score5;
    float average = 0;
    char grade;

    cout << "Enter five test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    average = (score1 + score2 + score3 + score4 + score5) / 5;

    if (average >= 90) {
        grade = 'A';
    }
    else if (average >= 80) {
        grade = 'B';
    }
    else if (average >= 70) {
        grade = 'C';
    }
    else if (average >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "The average test score is: " << average << endl;
    cout << "The final letter grade is: " << grade << endl;

    return 0;
}