/*
APMovieData.cpp
Ayush Prakash
3/1/2023
Collect movie data
*/

#include <iostream>
#include <string>

using namespace std;

// Define the MovieData structure
struct MovieData {
    string title;
    string genre;
    string director;
    int yearReleased;
    int runningTime;
};

// Function to display movie data
void displayMovie(MovieData movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Genre: " << movie.genre << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
}

int main() {
    // Create two MovieData variables
    MovieData movie1, movie2;

    // Prompt user for input and set movie data
    cout << "Enter information for movie 1:" << endl;
    cout << "Title: ";
    getline(cin, movie1.title);
    cout << "Genre: ";
    getline(cin, movie1.genre);
    cout << "Director: ";
    getline(cin, movie1.director);
    cout << "Year Released: ";
    cin >> movie1.yearReleased;
    cin.ignore(); // add this to consume the newline character
    cout << "Running Time (in minutes): ";
    cin >> movie1.runningTime;
    cin.ignore(); // consume the newline character

    cout << endl;

    cout << "Enter information for movie 2:" << endl;
    cout << "Title: ";
    getline(cin, movie2.title);
    cout << "Genre: ";
    getline(cin, movie2.genre);
    cout << "Director: ";
    getline(cin, movie2.director);
    cout << "Year Released: ";
    cin >> movie2.yearReleased;
    cin.ignore(); // add this to consume the newline character
    cout << "Running Time (in minutes): ";
    cin >> movie2.runningTime;
    cin.ignore(); // consume the newline character

    cout << endl;

    // Display movie data for both movies
    cout << "Movie 1:" << endl;
    displayMovie(movie1);

    cout << "Movie 2:" << endl;
    displayMovie(movie2);

    return 0;
}
