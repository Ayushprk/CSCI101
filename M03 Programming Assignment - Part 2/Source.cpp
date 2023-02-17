/*
Body Mass Index
Ayush Prakash
2/3/2023
To calculate and display a person's body mass index (BMI)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter weight in pounds: ";
    cin >> weight;
    cout << "Enter height in inches: ";
    cin >> height;

    bmi = weight * 703 / pow(height, 2);

    if (bmi >= 18.5 && bmi <= 25) {
        cout << "BMI: " << bmi << endl;
        cout << "Optimal weight" << endl;
    }
    else if (bmi < 18.5) {
        cout << "BMI: " << bmi << endl;
        cout << "Underweight" << endl;
    }
    else {
        cout << "BMI: " << bmi << endl;
        cout << "Overweight" << endl;
    }

    return 0;
}