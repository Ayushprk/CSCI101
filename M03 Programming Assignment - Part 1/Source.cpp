/*
Program name: APTriangles.cpp
Ayush Prakash
2/1/2023
To indicate whether or not the inputs form a triangle
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the length of the three sides: ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) {
        cout << "You have a valid triangle.\n";
        if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2)) {
            cout << "The triangle is a right triangle." << endl;
        }
    }
    else {
        cout << "The lengths do not form a triangle." << endl;
    }
    return 0;
}
