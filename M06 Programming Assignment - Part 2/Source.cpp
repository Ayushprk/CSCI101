/* 
APRainfallStatistics.cpp
Ayush Prakash
2/26/2023
Finding rainfalls stats
*/

#include <iostream>
using namespace std;

const int ROWS = 12;
const int COLS = 2;

void getData(double temps[ROWS][COLS]);
double averageHigh(double temps[ROWS][COLS]);
double averageLow(double temps[ROWS][COLS]);
int indexHighTemp(double temps[ROWS][COLS]);
int indexLowTemp(double temps[ROWS][COLS]);

int main() {
    double temps[ROWS][COLS];
    getData(temps);

    double avgHigh = averageHigh(temps);
    double avgLow = averageLow(temps);
    int highIndex = indexHighTemp(temps);
    int lowIndex = indexLowTemp(temps);

    cout << "Average high temperature for the year: " << avgHigh << " degrees." << endl;
    cout << "Average low temperature for the year: " << avgLow << " degrees." << endl;
    cout << "Highest temperature for the year was " << temps[highIndex][0] << " degrees in month " << highIndex + 1 << "." << endl;
    cout << "Lowest temperature for the year was " << temps[lowIndex][1] << " degrees in month " << lowIndex + 1 << "." << endl;

    return 0;
}

void getData(double temps[ROWS][COLS]) {
    cout << "Enter the highest and lowest temperature for each month of the year:" << endl;
    for (int i = 0; i < ROWS; i++) {
        cout << "Month " << i + 1 << ":" << endl;
        cout << "Highest temperature: ";
        cin >> temps[i][0];
        cout << "Lowest temperature: ";
        cin >> temps[i][1];
    }
}

double averageHigh(double temps[ROWS][COLS]) {
    double sum = 0;
    for (int i = 0; i < ROWS; i++) {
        sum += temps[i][0];
    }
    return sum / ROWS;
}

double averageLow(double temps[ROWS][COLS]) {
    double sum = 0;
    for (int i = 0; i < ROWS; i++) {
        sum += temps[i][1];
    }
    return sum / ROWS;
}

int indexHighTemp(double temps[ROWS][COLS]) {
    int index = 0;
    for (int i = 1; i < ROWS; i++) {
        if (temps[i][0] > temps[index][0]) {
            index = i;
        }
    }
    return index;
}

int indexLowTemp(double temps[ROWS][COLS]) {
    int index = 0;
    for (int i = 1; i < ROWS; i++) {
        if (temps[i][1] < temps[index][1]) {
            index = i;
        }
    }
    return index;
}
