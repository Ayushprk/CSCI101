#include <iostream>
using namespace std;

float find_area(float base1, float base2, float height) {
    return ((base1 + base2) * height) / 2;
}

int main() {
    float base1, base2, height, area;

    cout << "Enter the length of base 1: ";
    cin >> base1;

    cout << "Enter the length of base 2: ";
    cin >> base2;

    cout << "Enter the height of the trapezoid: ";
    cin >> height;

    area = find_area(base1, base2, height);

    cout << "The area of the trapezoid is: " << area << endl;

    return 0;
}
