// WHILE LOOPS and The WHIMSICAL WANDERING WAVES

// - while loops allow programers to repat sections of their code as long as an expression is true
// - if the expression is false the program moves on to the next statement after the loop 
// - loops will execute the statement and continue to repeat until the expression tests false which will cause the loop to end.
// basic form of a while loop below: 
// ex: while(expression)
//          statement;
// ----------------------------------------------------------------------------------------------------------------------------------------------------
// -DO LOOPS
// - do loops are basically while loops that execute a code block first and then it will check the condition
// - The code block is garanteed to be executed atleast onece, regardless of wheather the the condition is initially true or false
// - Here is the generic form of a do while loop below
//  do 
//      statement;
//  while(expression);

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------
// QUICK TIP - 
//Below will be us testing out while loops
#include <iostream>
using namespace std;
int main(){
    // here is a do while loop below
    // I like do while loops more
    char foodAnswer;
    do
    {
        cout << "do you like cake(y/n): " << endl;
        cin >> foodAnswer;
    } while (foodAnswer == 'y');
    cout << " you do not like cake well look at this HATER!!!" << endl;

// -------------------------------------------------------------------------------------------------------------------------------------------------
// You can see in the difference between do while loops is that you do not need to initalize the variable.
// you can see in the while loop I have to initalize the variable by setting it equal to something that will activate the while loop
    // below will be our variables
    char answer = 'y';
    while(answer == 'y'){
        cout << "Do you want to play again (y/n): " << endl;
        cin >> answer;
    }
    cout << "You chose to end the game well good bye!" << endl;

// ----------------------------------------------------------------------------------
    // Here is another example of how you can use while loopsn
    cout << "Here is the countdown" << endl;
    int count = 0; 
    while (count <= 10) {       
    cout << count << endl; 
    count++; 
    } 
// --------------------------------------------------------------------------------------------
     
    
    return 0;
}
