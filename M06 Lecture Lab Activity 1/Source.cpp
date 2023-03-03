#include <iostream>
using namespace std;

int main() {
    int inputArray[20];
    int outputArray[20];

    cout << "Please enter the first two values of the Fibonacci sequence: ";
    cin >> inputArray[0] >> inputArray[1];

    for (int i = 2; i < 20; i++) {
        inputArray[i] = inputArray[i - 1] + inputArray[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        outputArray[19 - i] = inputArray[i];
    }

    cout << "The Fibonacci sequence in reverse order is: ";
    for (int i = 0; i < 20; i++) {
        cout << outputArray[i] << " ";
    }
    cout << endl;

    return 0;
}
