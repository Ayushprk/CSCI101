/*
APDistanceFormula.cpp
Ayush Prakash
2/17/2023
distance between two points
*/

#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

double calculateRadius(double x1, double y1, double x2, double y2) {
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return distance;
}

double calculateArea(double radius) {
	double area = PI * radius * radius;
	return area;
}

double calculatePerimeter(double radius) {
	double perimeter = 2 * PI * radius;
	return perimeter;
}

int main() {

	double centerX, centerY, pointX, pointY;
	cout << "Enter the x-y coordinates of the center: ";
	cin >> centerX >> centerY;
	cout << "Enter the x-y coordinates of a point on the circle: ";
	cin >> pointX >> pointY;

	double radius = calculateRadius(centerX, centerY, pointX, pointY);

	double area = calculateArea(radius);
	double perimeter = calculatePerimeter(radius);

	cout << "Radius: " << radius << endl;
	cout << "Diameter: " << 2 * radius << endl;
	cout << "Circumference: " << perimeter << endl;
	cout << "Area: " << area << endl;

	return 0;
}
