// USING LOGICAL OPERATORS IN WHILE LOOPS

// Logical Operators Review
// -these are used with expressions such as if and else to yield a boolean result.

// -below are the three logical operators

// (&&)-Logical And
// -logical and will evaluate to true only if both statements are true
// ex:  int x = 5;
//      int y = 3;
//      cout << (x > 3 && x < 10);
// - above you will see that the expression will evaluate to true because both statements are true because 5 is greater than 3 AND 5 is less than 10


// (||)-Logical Or
// -logical or will evaluate to true if one of statement is true
// ex:  int x = 5;
//      int y = 3;
//      cout << (x > 3 || x < 4);
//  - in the example above you will see because one of the conditions are true (5 is greater than 3, but 5 is not less than 4) it returns as true

// (!)-Logical Not
// -logical not will return the reverse of the result, if the expression is true logical not makes it false and viseversa
// ex:  int x = 5;
//      int y = 3;
//      cout << (!(x > 3 || x < 10));
//  - in the example above you will see it returns false (0) because ! (not) is used to reverse the result

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;
int main(){
    // the \t will be a tab key
    cout << "\tWelcome to the Moshood Space Mining Website" << endl;
    // Below are all of our variables
    string username;
    string password;
    string verifyUsername;
    string verifyPassword;
    bool success;

    cout << "Please create a Username: " << endl;
    cin >> username;
    cout << "Please create a Password:" << endl;
    cin >> password;

    do
    {
       
       cout << "Please retype your created Username: " << endl;
       cin >> verifyUsername;
       cout << "Please retype your created Password: " << endl;
       cin >> verifyPassword;

// if 
       if(!(username == verifyUsername)){
        cout << "\nlogin failed Your Username is wrong Please try again!" << endl;
        success = false;
       }

       else if(!(password == verifyPassword)){
        cout << "\nlogin failed Your Password is wrong Please try again!" << endl;
        success = false;
       }

       else if((username == verifyUsername) && (password == verifyPassword)){
        cout << "\nYour UserName and Password are Correct!!!" << endl;
        cout << "\nWelcome to the Moshood Space Mining Website" << endl;
        success = true;
        }

       else {
        cout << "\nYour UserName and Password are wrong please try again!!!!" << endl;
        success = false;
       }
       
    } while (success == false);

    

    return 0;
}