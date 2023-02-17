/*
APCelsiustoFahrenheit
Ayush Prakash
2/9/2023
converts Celsius temperatures to Fahrenheit temperatures.
*/

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    double lower, upper;

    cout << "Enter the lower range of Celsius temperatures: ";
    cin >> lower;
    cout << "Enter the upper range of Celsius temperatures: ";
    cin >> upper;

    if (upper <= lower) {
        cout << "Error: upper range must be greater than lower range." << endl;
        return 1;
    }

    cout << "Celsius\tFahrenheit" << endl;
    for (celsius = lower; celsius <= upper; celsius++) {
        fahrenheit = 9.0 / 5.0 * celsius + 32;
        cout << celsius << "\t\t" << fahrenheit << endl;
    }

    return 0;
}
