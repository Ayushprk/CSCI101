/*
M03 Lecture Lab Activity 2.cpp
Ayush Prakash
1/31/2023
write a program which prompts the user to enter five test scores, then computes the test average and overall grade.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float score1, score2, score3, score4, score5;
    float average = 0;
    char grade;

    cout << "Enter five test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    average = (score1 + score2 + score3 + score4 + score5) / 5;

    int score_int = (int)round(average / 10 - 0.5);

    switch (score_int) {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
    }

    cout << "The average test score is: " << average << endl;
    cout << "The final letter grade is: " << grade << endl;

    return 0;
}
