// THIS SECTION WILL GO OVER SIZE OF(), RANDOM NUMBERS, CMATH LIBRARY, TYPECASTING and C-STRINGS

// -----------------------------------------------------------------------------------------------------------------
// -sizeof()
// - this will dertermine the size, in bytes a variable or a data type takes up
// ex: cout<< "size of char" << sizeof(char) << endl; this will output 1 as in 1byte of space
// another example:
//  int a = 5;
//  float g = 2.5;
// cout << "size of (a + g): " << sizeof(a + g) << endl;

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// The CMATH Library
// - This is a c++ library that allows you to use mathematical operations sucha as square roots sqrt(), logarithims log(), exponents exp() and other stuff
// to use the <cmath> library make sure that you type #include <cmath>
// ex: for exponents cout<< "2 to the power of 3 is: " pow(2, 3) << endl; 

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// rand() / srand()
// - This function will allow you to produce pseudo random numbers, to truly get random numbers you have to provide a seed number 
// to use rand and srand you have to type #include <cstdlib>
// you can use #include <ctime> to allow for a truly random number based upon the time
// ex:
// #include<cstdlib>
// #include<ctime>
// #include<iostream>
// using namespace std;
// int main()
// {
        // the srand() function will seed the random number generator with the current time to make sure there is a diffrent sequence of random numbers
//     srand(time(NULL));
        // the code below will make sure that the number will be from  1-10. +1 in the code make sure that the number will never be 0
//     int random{(rand() % 10) + 1};

//     cout << "Random Number: " << random << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Type Casting
// This is a way for you to change the type of a varaiable
// There are two types of type casting 
//      - Implicit type casting where the conversion is performed automatically by the compiler without a user doing anything
//          -ex: int num1 = 10;
//               float num2 = num1;  This just converted an int to a float


//      - Explicit type casting is where you purposefully convert a variable to a different variable type
//          -ex: float f = 3.5;
//               int b = static_cast<int>(f);

// -------------------------------------------------------------------------------------------------------------------------------------

// C-strings
// -are an array of characters that are always end by the null character i.e. `\0

// -when Initializing a cstring it requires you to know how many characters are in the string at compile time
// also notice how there are 6 characters that is because you add the \0 at the end
// ex: char greeting[6] = "hello";
// -when using cstrings you have to type #include <cstring> 
// -you can also use function like strlen() to get the length of a string, strcpy() to copy one string to another, strcat() to concatenate two strings, and many more.