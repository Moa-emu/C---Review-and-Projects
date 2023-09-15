// UNDERSTANDING OBJECTS

// -objects allow programmers to combine data and functions
// -  data element of an object is called a data member
// - a function of an object is called a member function

// ex: creatign an alien spacecraft objects that is of a new type called spacecraft, defined by a programmer, which has a data member as an interger  for its energy level and a member function called fireWeopons() to fire its weapons

// - the only thing you have to know is the objects daata members adn member functions
// - You can store objects in variables
// - You can access data members and member function using the member selection operator (.), by putting the operator after the variable name of the object
// - ex:you want your alien space to fire its weapons only if its energy level is greater than 10, look below for example code: 
// -ex: if(ship.energy > 10){
//        ship.fireWeapons()
//          }
// - ship.energy accesses the object's energy data member
// - ship.fireWeopons() calls the objects fireWeopans() member function.

// Although we will not make new typs just yes we will work with previously defined object types specifically string objects,
// - since strings are actually an object which provide its own member functions that allow you to do alot with the string object like gettign its length and character substitutions which we did in the first complex project

#include <iostream>
#include <string>
using namespace std;

int main(){
    // below we will be creating a game that the user will type in a string and the game will tell us how many characters are in the string, the character at position 0, and each position each character is in the string
    
    // below are our variables
    string phrase;
    int phraseLength;

    cout << "Please type a phrase: " <<  endl;
    // we are getting the entire line from the user
    getline(cin, phrase);
    
    // we are setting phraseLength to the length of the phrase using the .length() member function
    phraseLength = phrase.length();
    cout << "The Phrase has " << phraseLength << " characters in it." << endl;

    // phrase[0] will get the first character element in the phrase variable, Remember indexing starts from 0. 
    cout << "The character at position 0 is: " << phrase[0] << endl;

    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // below we will be changing the letter of the first charcter
    phrase[0] = 'L';
    cout << " We will change the first character at position 0 to l\n The phrase is now: " << phrase << endl;

    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------
    // we will now use a for loop to index out all of the individual characters
    for (int i = 0; i < phrase.length(); i++)
    {
        cout << "Character at position " << i << " is: " << phrase[i] << endl;
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------------
    // Below we will be showing how to use the .find() function
    // - The find function will find a substring what do you think it does
    string wordSearch;
    cout << "What do you want to search for in your phrase: " << endl;
    cin >> wordSearch;

    // This code uses the find function to search for the users word Seaarch within the phrase variable
    // size_t is used to represent the size or length in objects
    size_t position = phrase.find(wordSearch);

    // This code checks if the value of position is not equal to string::npos if it is true then the = phrase has been foudn and ti will report the position the phrase is found in
    if(position != string::npos){
        cout << "Substring found at position: " << position << endl;

    }
    else{
        cout << "Substring not found" << endl;
    }

    // Below will be us using the erase() member Funtion
    // - the erase() member function removes a specified substring from a string object

    // ex: phrase.erase(4,5) - this will remove 5 character substrings starting from postion 4
    //              - for the example above if the phrase was Lame Over!!! the rusult would be Lame!!!
    // ex: phrase.erase(4)- this will remove all other characters from positon 4 onwards.
    // ex: phrase.erase()- This will just remove everything from the string object


    // --------------------------------------------------------------------------------------------------------------------------------
    // The empty() Memeber function
    // - This will just return a boolean value of true or false
    // - if phrase.empty() is empty then it will return true if it is not empty it will return false
    // - so  if(phrase.empty()){
    //           cout << "The phrase is no more" << endl;
    //         }
    
    return 0;
}