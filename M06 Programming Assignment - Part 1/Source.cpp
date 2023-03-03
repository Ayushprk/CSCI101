#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_MONTHS = 12;
    double rainfall[NUM_MONTHS];
    string monthNames[NUM_MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "Enter the total rainfall for " << monthNames[i] << ": ";
        cin >> rainfall[i];
    }

    double totalRainfall = 0.0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        totalRainfall += rainfall[i];
    }
    double averageRainfall = totalRainfall / NUM_MONTHS;

    double minRainfall = rainfall[0];
    int driestMonth = 0;
    double maxRainfall = rainfall[0];
    int wettestMonth = 0;
    for (int i = 1; i < NUM_MONTHS; i++) {
        if (rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            driestMonth = i;
        }
        if (rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            wettestMonth = i;
        }
    }

    cout << "Annual Rain Report for <enter your county name here> County" << endl;
    cout << "Total rainfall: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " inches" << endl;
    cout << "The least rain fell in " << monthNames[driestMonth] << " with " << minRainfall << " inches." << endl;
    cout << "The most rain fell in " << monthNames[wettestMonth] << " with " << maxRainfall << " inches." << endl;

    return 0;
}
