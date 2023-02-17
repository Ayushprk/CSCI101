/*
APFallingDistance.cpp
Ayush Prakash
2/15/2023
Determine the distance the object falls in a specific time period
*/

#include <iostream>
using namespace std;

double fallingDistance(double time) {
    const double g = 9.8;
    return 0.5 * g * time * time;
}

int main() {
    cout << "Time\tDistance" << endl;

    for (int t = 0; t <= 15; t += 5) {
        double d = fallingDistance(t);
        cout << t << "\t" << d << endl;
    }

    return 0;
}

