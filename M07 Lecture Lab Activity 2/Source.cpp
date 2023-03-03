#include <iostream>
#include <cstdlib> //provides access to rand()
#include <ctime> // provides access to time()
using namespace std;

int rolldie() {
    return rand() % 6 + 1; // produces a random number between 1 and 6
}

int main()
{
    srand(time(0)); //reset the random number generator's seed using the current time
    int trials, i;
    cout << "How many times would you like to roll the die?" << endl;
    cin >> trials;
    for (i = 0; i < trials; i++) {
        cout << rolldie() << endl;
    }
}