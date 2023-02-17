/*
M02LabActivity1.cpp : This is the source file for this activity.
It contains several errors, which you are to find and correct.
For each error, briefly explain what was wrong and how you corrected it by using
*/
// a comment. You can begin a comment by starting a line with //, or...
/*
You can create a multi-line comment such as this one by beginning it with
a slash and an asterisk and concluding it with an asterisk and slash.
*/
#include <iostream>
using namespace std;
int main2()
int main()
{
    //This program computes the area of a trapezoid when the lengths of the bases and the height
    //are input by the user.
    float base1, base2, height, area;
    // the two variables are causing a compile error.
    cout << "Enter the length of the first base:";
    // missing "
    cin >> base1;
    cout << "Enter the length of the second base:";
    cin >> base2;
    cout << "Enter the length of the height:";
    cin >> height;
    area = height * (base1 + base2) / 2.0;
    // Missing Semicolon
    cout << "The area of the trapezoid is: " << area << endl;
}