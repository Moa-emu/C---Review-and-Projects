// this is the previous program but the player and the computer switch roles
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int computerNumber;
    int playerGuess;
    int maxAttempts = 10;

    srand(time(NULL));
    computerNumber = (rand() % 100) + 1;

    cout << "\tWelcome to the Moshood Guess My Number Game" << endl;
    cout << "Rules of the game: You will choose a random number between 1 and 100.\nThe computer will try to guess that number with as few attempts as possible" << endl;

    int attempts = 0;

    do {
        cout << "Enter a number between 1 and 100: " << endl;
        cin >> playerGuess;
        attempts++;

        if (playerGuess > computerNumber) {
            cout << "The computer's guess is too LOW." << endl;
        } else if (playerGuess < computerNumber) {
            cout << "The computer's guess is too HIGH." << endl;
        } else if (playerGuess == computerNumber) {
            cout << "The computer guessed it! That's the correct number." << endl;
        } else {
            cout << "Invalid Input" << endl;
        }

        if (attempts >= maxAttempts) {
            cout << "The computer has reached the maximum number of attempts. The correct number was: " << computerNumber << endl;
            break;
        }
    } while (!(playerGuess == computerNumber));

    return 0;
}
