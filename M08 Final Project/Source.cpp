/*
Sorrygame.cpp
Ayush Prakash
5/9/2023
Play a board game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 50;

// function prototypes
void rollDice(int& roll1, int& roll2);
int movePlayer(int player, int steps, int positions[], int numPlayers);
void swapWithLeadingPlayer(int player, int positions[], int numPlayers);
void swapWithLastPlayer(int player, int positions[], int numPlayers);
bool isPlayerOnSameSpace(int player, int positions[], int numPlayers);
void printBoard(int positions[], int numPlayers);
bool isGameOver(int positions[], int numPlayers);
void playSorry();

int main() {
    srand(time(nullptr)); // seed the random generator with current time

    bool playAgain = true;

    while (playAgain) {
        playSorry();

        cout << "Do you want to play again? (y/n): ";
        char choice;
        cin >> choice;
        playAgain = (choice == 'y' || choice == 'Y');
    }

    return 0;
}

void rollDice(int& roll1, int& roll2) {
    roll1 = rand() % 6 + 1; // roll a six-sided die
    roll2 = rand() % 6 + 1; // roll another six-sided die
}

int movePlayer(int player, int steps, int positions[], int numPlayers) {
    int newPos = (positions[player] + steps) % BOARD_SIZE; // calculate new position
    positions[player] = newPos; // update position
    return newPos;
}

void swapWithLeadingPlayer(int player, int positions[], int numPlayers) {
    int leader = -1;
    int maxPos = -1;
    for (int i = 0; i < numPlayers; i++) {
        if (i != player && positions[i] > maxPos) {
            leader = i;
            maxPos = positions[i];
        }
    }
    if (leader >= 0) {
        swap(positions[player], positions[leader]); // swap positions with leading player
    }
}

void swapWithLastPlayer(int player, int positions[], int numPlayers) {
    int lastPlayer = -1;
    int minPos = BOARD_SIZE + 1;
    for (int i = 0; i < numPlayers; i++) {
        if (i != player && positions[i] < minPos) {
            lastPlayer = i;
            minPos = positions[i];
        }
    }
    if (lastPlayer >= 0) {
        swap(positions[player], positions[lastPlayer]); // swap positions with last player
    }
}

bool isPlayerOnSameSpace(int player, int positions[], int numPlayers) {
    for (int i = 0; i < numPlayers; i++) {
        if (i != player && positions[i] == positions[player]) {
            return true;
        }
    }
    return false;
}

void printBoard(int positions[], int numPlayers) {
    cout << "+";
    for (int i = 0; i < BOARD_SIZE; i++) {
        cout << "-";
    }
    cout << "+\n";
    for (int i = 0; i < numPlayers; i++) {
        cout << "|";
        for (int j = 0; j < positions[i]; j++) {
            cout << " ";
        }
        cout << "P" << (i + 1);
        for (int j = positions[i] + 2; j < BOARD_SIZE; j++) {
            cout << " ";
        }
        cout << "|\n";
    }
    cout << "+";
    for (int i = 0; i < BOARD_SIZE; i++) {
        cout << "-+";
    }
        cout << "\n";
}

bool isGameOver(int positions[], int numPlayers) {
    for (int i = 0; i < numPlayers; i++) {
        if (positions[i] == BOARD_SIZE - 1) {
            return true;
        }
    }
    return false;
}

void playSorry() {
    cout << "Welcome to Sorry!\n";
    int numPlayers;
    do {
        cout << "How many players? (2-4): ";
        cin >> numPlayers;
    } while (numPlayers < 2 || numPlayers > 4);
    
    int positions[numPlayers];
    int i, j;
    for (i = 0; i <numPlayers; i++) {
        positions[i] = 0;
    }
 
    int playerPositions[numPlayers][1]; // initialize all positions to 0
    
    for (i = 0; i <numPlayers; i++) {
        for (j = 0; j <1; j++)
            playerPositions[i][j] = 0;
    }

    bool started = false;
    int currentPlayer = -1;
    int consecutiveDoubles = 0;

    while (!isGameOver(positions, numPlayers)) {
        currentPlayer = (currentPlayer + 1) % numPlayers; // rotate players

        if (!started) {
            int roll1, roll2;
            do {
                cout << "Player " << (currentPlayer + 1) << ", roll the dice to start: ";
                cin.ignore(); // wait for Enter key
                rollDice(roll1, roll2);
                cout << "You rolled " << roll1 << " and " << roll2 << ".\n";
            } while (roll1 != roll2);
            started = true;
        } else {
            int roll1, roll2;
            cout << "Player " << (currentPlayer + 1) << ", roll the dice: ";
            cin.ignore(); // wait for Enter key
            rollDice(roll1, roll2);
            cout << "You rolled " << roll1 << " and " << roll2 << ".\n";

            int steps = roll1 + roll2;

            if (roll1 == roll2) {
                consecutiveDoubles++;
            } else {
                consecutiveDoubles = 0;
            }

            if (consecutiveDoubles == 2) {
                cout << "Player " << (currentPlayer + 1) << " rolled two doubles in a row and must start over!\n";
                positions[currentPlayer] = 0;
                consecutiveDoubles = 0;
                continue;
            }

            if (steps == 12) {
                cout << "Player " << (currentPlayer + 1) << " starts over!\n";
                positions[currentPlayer] = 0;
                continue;
            } else if (steps == 7) {
                cout << "Player " << (currentPlayer + 1) << " swaps spots with the leading player!\n";
                swapWithLeadingPlayer(currentPlayer, positions, numPlayers);
            } else if (steps == 11) {
                cout << "Player " << (currentPlayer + 1) << " swaps spots with the last player!\n";
                swapWithLastPlayer(currentPlayer, positions, numPlayers);
            } else if (steps == 4) {
                cout << "Player " << (currentPlayer + 1) << " moves back one space.\n";
                movePlayer(currentPlayer, -1, positions, numPlayers);
            } else {
                cout << "Player " << (currentPlayer + 1) << " moves " << steps << " spaces.\n";
                movePlayer(currentPlayer, steps, positions, numPlayers);
            }

            if (isPlayerOnSameSpace(currentPlayer, positions, numPlayers)) {
                cout << "Player " << (currentPlayer + 1) << " landed on the same space as another player!\n";
                positions[currentPlayer] = 0;
            }
        }

        printBoard(positions, numPlayers);
    }

    cout << "Player " << (currentPlayer + 1) << " wins!\n";
}