//  Understanding C-style Strings pg.124

// These are just an array of characters that are terminated by a null character.
// To declare a c-string you can just do it the same way your would any other array:
// ex: char phrase[] = "Game Over!!!";
// it is best to remember that there will always be an null charcter at the end of each c-string that looks like "\0"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* code */
    // Below is a regular string
     string word1;
    
    
    
    cout << "enter a word for word 1:";
    getline(cin, word1);

   // Below is a c-string
   char word2[] = "Over";
    
   

    // The code below will give us an error because we cannot concatonate a string and a c-string together we would have to change the c-string into a regular string
    // string phrase = word1 + word2;

    string phrase = word1 + string(word2); // Convert C-style string to std::strin

    if(word1 != string(word2))
    {
        cout << "word1 and word 2 are not equal.\n";

    }
    // The code below especially the .find and ::npos will tell you if word2 is contained in phrase
    if(phrase.find(string(word2)) !=string::npos)
    {
        cout << "word2 is contained in phrase.\n";
    }
    return 0;
}

