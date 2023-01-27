/*
M02LabActivity2.cpp : This is the source file for this activity.
This program should compile correctly and run, but doesn't give quite the correct result--that is, it has semantic errors.
Find and correct the error(s), and briefly explain the issue and correction in a commment.
When run using a radius of 3 and height of 4, the correct output should be 113.04
*/
#include <iostream>
#include <iomanip> 
//this header provides the setprecision() manipulator for formatting output
using namespace std;
int main()
{
    //This program computes the volume of a cylinder when the lengths of the radius and the height are input by the user.
    float radius, height, volume;
    //Change variable from int to float
    cout << "Enter the length of the radius:";
    cin >> radius;
    cout << "Enter the length of the height:";
    cin >> height;
    volume = 3.14 * radius * radius * height;
    //Removed static_cast<float> 
    //This formula is the correct formula for the volume of a cylinder. 
    //Instead of squaring the radius, it's simply multiplied by itself here.
    cout << fixed << showpoint << setprecision(2);
    cout << "The volume of the cylinder to two decimal places is: " << volume << endl;
}