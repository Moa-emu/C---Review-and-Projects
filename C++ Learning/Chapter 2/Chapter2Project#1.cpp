// This will be our code for program 1

#include <iostream>
#include <string>
using namespace std;

int main(){
    // below are all of our variables
    string productDescription;
    string productHash;
    int userChoice;
    string productHashCheck;
    string prodcutHashValid;
     

    // Here will be our do while loop that will have all of our code
    do
    {
        // Below will be our menu
        cout << "\n\tMenu" << endl;
        cout << "1. Generate prodcut hash value" << endl;
        cout << "2. Generate SKU from product hash value" << endl;
        cout << "3. Verify SKU " << endl;
        cout << "9. Exit " << endl;
        cout << "Enter choice: " << endl;
        // below will cin the users choice answer
        cin >> userChoice;

        // this will allow a user to change a product description into a hash value
        if(userChoice == 1){
            cout << "Enter description: " << endl;
            // we use getline to get the entire line of input from the user
            // we will also use cin.ignore() to clear any remaining newline characters
            cin.ignore();
            getline(cin, productDescription);

            
            // Below will be a variable that will later contain the sum of all of the ASCII values together
            int sumASCII{0};
            // We will use a for loop to convert each character in the users description to its ascii value
            for(int i = 0; i < productDescription.length(); i++){
                // this code below takes every individual character and converts it into its ASCII value usign variable conversion the int(productDescription[i]) code but this is not quite what we want
                // cout << "Character: " << productDescription[i] << ", ASCII value: " << int(productDescription[i]) << endl;

                // what the sumASCII code will do is that each time the for loop itterates it will keep adding the ascii value number of each character to the sumASCII variable until it gets the  combined ASCII value for all fo the characters together
                sumASCII += int(productDescription[i]);     
            }
            // below we will first turn sumASCII into a string
            string sumASCIISTRING = to_string(sumASCII);
              if (sumASCIISTRING.length() < 5 ){
                // below we will have code that will calculate how many zeros we have to add
                int zerosToAdd = 5 - sumASCIISTRING.length();
                    // the line of code below declares the string zero
                    // (zerosToAdd, '0') is a constructor where zerosToAdd specifies the number of characters to initalize the string with
                    // '0' specifies the character to use for the initialization
                    string zeros(zerosToAdd, '0'); 
                   productHash = sumASCIISTRING + zeros;
              }
              else{
                 productHash = sumASCIISTRING;
              }
              
            cout << " prodcut number: " << productHash << endl;
            // cout << "product number: " << productHash << endl;
        }

        // This will will make our 5-digit product hash value become added with a check digit
        else if(userChoice == 2){
            cout << "Enter 5-digit prodcut hash value: " << endl;
            cin >> productHash;
            int checkDigit;
            // below you will see us taking out all of the null characters and indexing the productHash string and turning each character into numbers by taking away the null character
            int first{productHash[0] - '0'};
            int second{productHash[1] - '0'};
            int third{productHash[2] - '0'};
            int fourth{productHash[3] - '0'};
            int fifth{productHash[4] - '0'};

            // the code below will add all of the digits in odd positions and then multiply it by 3 then it will add all of the digits in even positons and add the sum of odd and even.
            int checkSUM{((first + third + fifth) * 3) + (second + fourth)};
            // After that it will dertermine what number needs to be added to the result of the previous step in order to make an even multiple of 10 
            // The if statement states that if the checkSUM is evenly divisible by 10 then the checkdigit should be 0
            if (checkSUM % 10 == 0){
                 checkDigit = 0;
            }
            else{
                int nextMultipleOf10 = ((checkSUM / 10) + 1) * 10; // Calculate the next multiple of 10
                checkDigit = nextMultipleOf10 - checkSUM;
            }
            // the code below will turn the check digit to a string and then add it to the productHash creating the variable productHashCheck
            string checkToAdd = to_string(checkDigit);
            productHashCheck = productHash + checkToAdd;

            
            cout << "SKU with check digit = " << productHashCheck << endl;
        }

        // This will validate our SKU
        else if(userChoice == 3){
            cout << "Enter 6-digit SKU: " << endl;
            cin >> prodcutHashValid;
            // if the 6-digit SKU/productHashValid is the same as the productHashCheck it will say the SKU is valid otherwise it will say the SKU is invalid
            if(prodcutHashValid == productHashCheck){
                cout << "SKU is valid" << endl;
            }
            else{
                cout << "SKU is invalid" << endl;
            }
        }

        // This will allow the user to exit the loop
        else if(userChoice == 9){
            cout << "BYE!!!" << endl;
            break;
        }

        // as long as the user choice is not 9 then the loop will continue to go on
    } while (userChoice != 9);
    

    return 0;
}