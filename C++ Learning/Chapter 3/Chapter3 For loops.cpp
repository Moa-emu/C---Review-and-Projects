// FOR-LOOPS 
// - These are loops taht allow you to reapeat sections of code just like while loops
// - Although for loops  are suited for counting and moving through a sequence of things
// - ex: moving through items in an RPG game inventory

// generic Structure of a for loop below
//  for (initialization; test; action)
//      statement;

// - initialization: sets up an initial condition for the loop
// - test: what will be tested each time before the loop is executed. 
//      -If test is false the program moves on to the statement after the loop
//      -If test is true, the program will execute the statement
// -action: incrementing a counter variable
// - The loop will end when test is false


// Below will be us testing out for loops
#include <iostream>
using namespace std;

int main(){
    // below are our variables
    int countdown;
    cout << "Sir when should we strike, Private let me commence a countdown." << endl;
    
    // Below will be our for loop which will countdown
    // we initalize i to at first equal 10
    // we test that i is greater than or equal to 0
    // We set the action to i decreasing
    for ( int i = 10; i >= 0; i--)
    {
        if(i == 0){
            cout << "fire" ;
        }
        else{
        cout << i << " ";
        }

    }

    cout << "\n\nBelow will be the fizzbuzz question" << endl;
    // Below we will doing the famous programmer fizzbuzz question
    // Write a program that prints the numbers from 1 to 100 and for multiples of '3' print “Fizz” instead of the number and for the multiples of '5' print “Buzz”.
    for (int j = 1; j <= 100; j++){
        if(j % 3 == 0){
            cout << "Fizz ";
        }
        else if (j % 5 == 0){
            cout << "Buzz ";
        }
        else{
            cout << j << " ";
        }
    }

    // Below we will use a for loop to cout by fives
    cout << "\n\nCounting by fives: " << endl;
    for ( int l = 0; l <= 50; l+= 5)
    {
        cout << l << " " << endl; 
    }

    // Below you will see me using Empty statements in loops
    // what an empty statement is is when the initalization and action statement is not within the loop itself
    cout << "\n\nWe will be using Empty statements in loops below" << endl;
    // below is the intilization
    int count{0};
    // below is the actual for loop with only the test
    for (;count <= 10;){
        cout << count << " ";
        // below is the increment/action statement
        count++;
    }

    // The last type of loop we will be talking about is Nested loops 
    // - Nested loops are for loops that are inside another for loop.

int rows, columns;

    cout << "\nEnter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

 cout << "\n\nBelow will be a nested loop: " << endl; 
    // 
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    //  here is an example using arrays which we will learn about later
    cout << "tempreture example with arrays" << endl;
    // In this scenario, you have a matrix representing the temperatures for each day of the week in a given month. The matrix has 4 rows (representing the weeks) and 7 columns (representing the days of the week).To calculate the average temperature for each day of the week, you can use a nested for loop to iterate over each row and column of the matrix.
    // In this code, we have a 2D array temperatures representing the temperatures for each day of the week in a given month. Each row represents a week, and each column represents a day of the week.The outer loop iterates over the columns (days of the week) using the variable i. The inner loop iterates over the rows (weeks) using the variable j.Inside the inner loop, we accumulate the sum of temperatures for each day of the week by accessing the corresponding element in the temperatures array using temperatures[j][i].After calculating the sum for each day of the week, we calculate the average temperature by dividing the sum by the number of weeks (4 in this case). We use static_cast<double>(sum) to convert the sum to a double to ensure the division results in a floating-point value.Finally, we display the average temperature for each day of the week using cout.
    int temperatures[4][7] = {
        { 25, 26, 24, 23, 22, 21, 20 },
        { 27, 28, 26, 25, 24, 23, 22 },
        { 23, 24, 22, 21, 20, 19, 18 },
        { 26, 27, 25, 24, 23, 22, 21 }
    };

    for (int i = 0; i < 7; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += temperatures[j][i];
        }
        double average = static_cast<double>(sum) / 4;
        cout << "Average temperature for day " << i + 1 << ": " << average << endl;
    }
    
    return 0;
}
