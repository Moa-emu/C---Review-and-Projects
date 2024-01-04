// Using Miltidimensional Arrays
// - Arrays are great for games as you can use them to store a list of items , but sometimes part of a game cries out for more  than a linear list of things. Sometimes part of a game literally requires more dimension 
// Below we will be using code to create a tick tack toe game

#include <iostream>
using namespace std;

int main(){
    // Below will be some const that will define the rows and columnms 
    const int ROWS = 3;
    const int COLUMNS = 3;
    // Below will be what we will use to keep a while loop
    bool validInput = false;

    // This will contain the players response
    char playerResponse;
    
    // Below will be a while loop that will make sure that the player puts in either an X or an O
     while(!validInput){
        cout << "put in your character (X or O): ";
        // This whill get the players response
        cin >> playerResponse;

        // Below will make sure that if the player puts in an X or an O then the loop will be true and it will move to the next item
        if(playerResponse == 'X' || playerResponse =='O'){
            validInput = true;
        }
        else{
            cout << "Invalid character. please enter 'X' or 'O'";
        }
     }




    //Below will be printing out the board
    cout << "Here is your tic-tac toe board:\n";
    // Below you will see that we are going to make the empty board 
    // Our board will be a multidimensional array with two for loops
    char board[ROWS][COLUMNS] = {{'X', 'O', 'X'},
    {'X', 'X', 'X'},
    {'O', 'X', 'O'}};
    // the double for loop will print out the Rows and Columns
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            // below it will print out our empty board we just 
            cout << board[i][j] << " ";
        }
        cout << endl;
        
    }
    
}