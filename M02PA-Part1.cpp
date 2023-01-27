#include <iostream>
using namespace std;

/*
M02 Programming Assignment.cpp
Ayush Prakash
1/26/2023
write a program that gets inputs from the user, produces outputs, and performs calculations.
*/

int main() {
    float cookies, sugar, butter, flour; 

    int cookies_recipe = 48;
    float sugar_recipe = 1.5, butter_recipe = 1.0, flour_recipe = 2.75;

    cout << "Enter the number of cookies: ";
        cin >> cookies;
    sugar = (cookies * sugar_recipe) / cookies_recipe;
    butter = (cookies * butter_recipe) / cookies_recipe;
    flour = (cookies * flour_recipe) / cookies_recipe;

    cout << "To Make " << cookies << " cookies, you will need:" << endl;
    cout << sugar << " cups of sugar" << endl;
    cout << butter << " cups of butter" << endl;
    cout << flour << " cups of flour" << endl;
}
