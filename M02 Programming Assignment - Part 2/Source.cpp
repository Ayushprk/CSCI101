/*
APRestaurantBill.cpp
Ayush Prakash
 1/27/2023
 To inform a user of their meal charge. 
*/

#include <iostream>
using namespace std;

int main()
{
	float meal_charge = 0;
	double tax = 0;
	double tip = 0;
	double total_bill = 0;

	cout << "Enter the cost of the Meal: ";
	cin >> meal_charge;

	tax = meal_charge * 0.0675;
	tip = (meal_charge + tax) * 0.20;
	total_bill = meal_charge + tax + tip;

	cout << "Meal cost: $" << meal_charge << endl;
	cout << "Tax amount: $" << tax << endl;
	cout << "Tip amount: $" << tip << endl;
	cout << "Total bill: $" << total_bill << endl;

}