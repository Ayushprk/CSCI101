#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 50;

// Function to roll a dice
int rollDice() {
    return rand() % 6 + 1;
}

// Function to move a player on the board
void movePlayer(int player, int& position, int roll, int* board, int numPlayers) {
    int oldPosition = position;
    position += roll;
    if (position >= BOARD_SIZE) {
        cout << "Player " << player + 1 << " wins!" << endl;
        return;
    }
    // Check for other player at new position
    for (int i = 0; i < numPlayers; i++) {
        if (i != player && board[i] == position) {
            cout << "Player " << i + 1 << " sent back to start!" << endl;
            board[i] = 0;
        }
    }
    // Update board with new position
    board[player] = position;
    cout << "Player " << player + 1 << " moved from " << oldPosition << " to " << position << endl;
}

// Function to display the board with player positions
void displayBoard(int* board, int numPlayers) {
    cout << "Board:" << endl;
    for (int i = 0; i < numPlayers; i++) {
        cout << "Player " << i + 1 << " is at space " << board[i] << endl;
    }
}

int main() {
    srand(time(NULL));
    int numPlayers;
    cout << "How many players? (2-4) ";
    cin >> numPlayers;
    if (numPlayers < 2 || numPlayers > 4) {
        cout << "Invalid number of players. Please enter 2-4." << endl;
        return 0;
    }
    int* board = new int[numPlayers]();
    int currentPlayer = 0;
    bool doubleRoll = false;
    cout << "Roll a double to start!" << endl;
    while (true) {
        cout << "Player " << currentPlayer + 1 << "'s turn. Press enter to roll the dice." << endl;
        cin.ignore();
        int roll1 = rollDice();
        int roll2 = rollDice();
        int totalRoll = roll1 + roll2;
        cout << "Roll: " << roll1 << " + " << roll2 << " = " << totalRoll << endl;
        if (doubleRoll) {
            if (roll1 == roll2) {
                cout << "Double! Rolling again." << endl;
                doubleRoll = false;
                continue;
            } else {
                cout << "No double. Starting over." << endl;
                board[currentPlayer] = 0;
                doubleRoll = false;
            }
        }
        if (roll1 == roll2) {
            cout << "Double! Roll again." << endl;
            doubleRoll = true;
        }
        if (board[currentPlayer] == 0 && roll1 == roll2) {
            cout << "Starting player " << currentPlayer + 1 << "." << endl;
            board[currentPlayer] = 1;
        } else if (board[currentPlayer] == 0) {
            cout << "No double. Wait for next turn to start." << endl;
        } else {
            movePlayer(currentPlayer, board[currentPlayer], totalRoll, board, numPlayers);
        }
        displayBoard(board, numPlayers);
        if (board[currentPlayer] >= BOARD_SIZE) {
            break;
        }
         currentPlayer = (currentPlayer + 1) % numPlayers;
    }
    cout << "Game over! Play again? (y/n) ";
    char playAgain;
    cin >> playAgain;
    if (playAgain == 'y') {
        main(); // restart the game
    }
    
    return 0;
}