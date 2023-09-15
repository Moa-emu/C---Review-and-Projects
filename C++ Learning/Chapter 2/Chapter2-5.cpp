// The GUESS MY NUMBER PROJECT 
// -create a game where the  computer chooses a random number between 1 and 100, and
// the player tries to guess the number in as few attempts as possible. Each time the
// player enters a guess, the computer tells him whether the guess is too high, too
// low, or right on the money. Once the player guesses the number, the game is
// over. 

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    // Below will be the variables that we will use
    int computerNumber;
    int playerGuess;
    // Below will be an attempts variable so that we can keep the number of attempts limited
    // we are intializing attempts at 0 so it can start at 0
    // atttmpts also mitigates the risk for the player to be stuck in an infinite loop
    int attempts{0};
    // maximum attempts is exactly what it sounds like
    int maxAttempts{10};

    // The Code below will be how we will generate a random number
     // the srand() function will seed the random number generator with the current time to make sure there is a diffrent sequence of random numbers
     srand(time(NULL));
    // the code below will make sure that the number will be from  1-100. +1 in the code make sure that the number will never be 0
    computerNumber =(rand() % 100) + 1; 
     
     

    // The \t will create a tab key
    cout << "\tWelcome to the Moshood Guess My Number Game" << endl;
    cout << "Rules of the game: The computer will choose a random number between 1 and 100.\n Your job is to guess that number with as few attempts as possible before your get to 10 attmpts" << endl;
     

    do
    {
        cout << "Enter a guess: " << endl;
        cin >> playerGuess;

        // below attempts++ will increase the attempts every time the loop goes
        // each time the loop goes attempts  variable will increase
        attempts++;

        // The if, else if and else statements below deal with the player attempts
        if (playerGuess > computerNumber){
            cout << "Your guess is too HIGH try again!!!" << endl;
        }
        else if(playerGuess < computerNumber){
            cout << "Your guess is too Low try again!!!" << endl;
        }
        else if (playerGuess == computerNumber){
            cout << "Good Job! you got it in " << attempts << " attempts!!" << endl;
            break;
        }
        else{
            cout << "Invalid Input" << endl;
        }

        // The if statment below will deal with the attemps and make sure that when the attempts reaches 10 the loop stops 
        if (attempts >= maxAttempts){
            cout << "You have reached the maximum amount of attempts sorry! the correct number was "<< computerNumber <<" try again next time!" << endl;
            // break will stop the loop
            break;
        }
        // The while loop means as long as the player guess is not equal to the computer number keep the loop going
    } while (!(playerGuess == computerNumber));
    
    return 0;
}
