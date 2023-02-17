/*
Program name: APFibonacciSequence.cpp
Ayush Prakash
2/9/2023
accepts the first two values from the user, but instead of the nth Fibonacci number, requests the highest value to be reported.
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, limit, next, largest;

    cout << "Enter the first two values of the Fibonacci sequence: ";
    cin >> num1 >> num2;
    cout << "Enter the highest value to be reported: ";
    cin >> limit;

    cout << num1 << " " << num2 << " ";
    largest = num2;
    while (largest <= limit) {
        next = num1 + num2;
        cout << next << " ";
        num1 = num2;
        num2 = next;
        largest = next;
    }
    cout << endl;

    return 0;
}
