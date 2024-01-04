// Now we will breifly go over Declaring and initializing variables
// Breif definition of a variable in C++ 
// variable: represents a particular piece of your computer’s memory that has been set aside for you to use to store, retrieve, and manipulate data


// variables come in different types for example look below
//  -boolean values(true or false)
//  -char: single character values
//  -strings: which are a data type that represents a sequence of characters. When using strings make sure that you use " " when initializing them 
//  -int: for intergers
//  -float: for single-precision floating point numbers ex: 3.14, 1.2e^-8
//  -double: for double-precision floating point numbers ex: just like a float but can hold more values 2.2e^-308. 
// There are also type modifiers such as short, long, signed and unsigned
//  -signed: this is a modifier that means a variable can store both positive and negative values
//  -unsigned: is a modifier that can only store positive values

// Here is something cool you can do with modifiers look below
// typedef unsigned short int ushort; this makes the variable ushort a unsigned, short interger.
// typedef will combine modifiers and types together in your variable so your variable will have all of those properties
// another way at looking at is you are basically creating a new modifier/type with an name that you create


// cin >> variable; that is a way for you to be able to use a variable to get an users input


#include<iostream>
// Below will allow us to be able to use strings in our code
#include <string>
using namespace std;
int main(){
    cout<< "After the doctor has checked you out and consider you healthy she says that you can leave her office, on the topic of payment she says taht you do not need to worry about it. \n "<<endl;

    
    // We will make a mini game where to gain money the mainCharacter will go kill cow bandits
    // below you will see all of the variables that we are going to initialize
   
   // remember int is intergers
    int banditsKilled;
    // bool is boolean values of true or false
    bool spareBandits;
    int bullets, moneyEarned;
    // char is characters
    char joinAgain;

    string join;

    // double is a value with a decimal point
    double distance;

    // below you can see short as a type modifier that is used to declare variables that can hold small integers within a specific range
    // You can also see that I am defining two variables at the same time
    // You can use short and long to modify interger values
    short cowsSaved, bulletsUsed;

    banditsKilled = 5;
    bullets = 30;
    spareBandits = false;
    distance = 300000.75;
    //  you can see that I skipped spareBandits because you typically do not print boolean values
    // Below you can see the difference in assigning a string and a char
    joinAgain = 'y';
     join = "yes";
    cowsSaved = 10;
    bulletsUsed = 20;
    moneyEarned = 100;
    string name;
    cout << "After you have left the doctors office, You overhear a man with the wells douglas livestock company shouting for able bodied combat ready men to help him kill some cattle theives he walks up to you and you respond with " << endl;
    // The join variable will print out a character
    cout << join 
    << ". The men then ask you for your name which you tell them is" << endl;
    
    
    
    // getline(cin, name); on the left is to use cin to get an entire line of input from the user 
    cin >> name;   //note that this version of using cin on the left will only give you the first word all other words 
     
    cout <<"They respond with welcome " << name << " , we apreciate you joining our cause. The men give you a horse and a rifle with "<<
     bullets <<
     " bullets, that they give you. You then accompany the men and travel a distance of "
    << distance 
    << " feet. After your journey you killed "
    << banditsKilled <<" bandits, using "  << bulletsUsed << " bullets and you saved " << cowsSaved << " cows. Which allowed you to earn " << moneyEarned << " dollars. \n"
    << endl;

    cout<<
    "would you want to join these men again on another adventure (y = yes): " 
    << joinAgain << endl;



    return 0;
}