// M02LabActivity2.cpp
/*
The program below computes the total bill for a purchase made using a 'percent off' coupon, with a sales tax of 7% applied to it. 
Correct any errors to get the program to run correctly, 
and then modify the program to read values from the user for the total amount of the purchase and the coupon discount rate.
Bonus: modify the program to output to the screen as well as to a file.
The correct output value for the supplied values is $59.92.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main2();
int main()
{
	float total, couponrate;
	const float taxrate = 0.07f;
	cout << "Enter total amount of purchase: ";
	cin >> total;
	cout << "Enter coupon discount rate: ";
	cin >> couponrate;
	float subtotal = (1 - couponrate) * total;
	float finaltotal = subtotal + (subtotal * taxrate);
	cout << "The total amount due is $" << finaltotal << " ." << endl;
	ofstream outfile;
	outfile.open("bill.txt");
	outfile << "The total amount due is $" << finaltotal << "  ." << endl;
	outfile.close();
	return 0;
}