#include <iostream>

using namespace std;

int f(int n) {
    if (n % 2 == 0) {
        return n / 2;
    }
    else {
        return 3 * n + 1;
    }
}

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    while (n != 1) {
        n = f(n);
    }
    cout << "The value eventually became 1." << endl;
    return 0;
}
