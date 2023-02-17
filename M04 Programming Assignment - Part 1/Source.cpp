/*
APDistanceTraveled.cpp
Ayush Prakash
2/8/2023
TO find the distance traveled
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int speed, time, distance;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    while (speed < 0)
    {
        cout << "Invalid input. Speed must be a positive number.\n";
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> time;

    while (time < 1)
    {
        cout << "Invalid input. Time must be at least 1 hour.\n";
        cout << "How many hours has it traveled? ";
        cin >> time;
    }

    cout << "Hour\tDistance Traveled" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 1; i <= time; i++)
    {
        distance = speed * i;
        cout << i << "\t\t" << distance << endl;
    }

    return 0;
}