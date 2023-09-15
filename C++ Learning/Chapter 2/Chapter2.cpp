// RELATION OPERATORS, IF statements , Switch statements , and Loops


// ---------------------------------------------------------------------------------
// Understanding Truth in C++
// - in C++ something can only be true or false as seen with the bool variable
// - A common kind of expression to interpret wheather something is true or false are called Relational Operators

// Here are some relational operators
//          (==)equal to 
//          -ex: 5==5 is true 
//          -ex: 5 == 8 is false

//          (!=) not equal to 
//          -ex: 5 != 8 this is true because 5 is not equal to 8
//          -ex: 5 !=5 is false

//          (>) greater than 
//          -ex: 8 > 5 is true
//          -ex: 5 > 8 is false

//          (<) less than 
//          -ex: 5 < 8 is true
//          -ex: 8 < 5 is false

//          (>=) greater than or equal to 
//          -ex: 8 >= 5 is true
//          -ex: 5 >= 8 is false

//          (<) less than or equal to
//          -ex: 5 <= 8 is true
//          -ex: 8 <= 5 is false

// --------------------------------------------------------------------------------------------------------------------------

// Using the IF statement
// - the If statement allows programers to execute some code based on if the expression is true. If the expression is true the statement is executed
// you can put anything within the expression ex: if(score >= 250) or if(aliens == 5000)
// ex: if(expression)
//          statement;

// -nesting If statements this is when you put an if statement within another if statement 
// ex: if(score >= 500)
//      {
//          cout << "You scored 500 or more. Nice.\n\n";
// 
//          if(score >= 1000)
//          { 
//              cout << "You scored 1000 or more. Impressive! \n";
//          }
//      }

// ------------------------------------------------------------------------------------------------------------------------------
// Using the Else Cluase
// - The else cause is code that will executed if the if expression is false.
// ex: if(expression)
//          statement1;
//     else
//          statement2;
// - in the example above is expression is true statement1 will be executed and statement 2 will be skipped
// - Although if expression is false then statement1 is skipped and statement2 is executed

// ----------------------------------------------------------------------------------------------------------------------------------------------

// Using the Else If cluase
// - the else if clause is just way to add another coditions within an if statement
// ex: if(expression1)
//          statement1;
//     else if(expression2)
//          statement2;
//     else
//          statement 3;
// - in the example if expression 1 is false and expresion 2 is true then statement 2 will execute and the else statement will be skipped

// ---------------------------------------------------------------------------------------------------------------------------------------------------------
// -Here is a quick tip the equals to operator is (==) the assignment operator is(=)
// ---------------------------------------------------------------------------------------------------------------------------------------------------------

// Logical Operators  
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








// Here is a good example of if and else statements using logical operators
// #include <iostream>

// using namespace std;

// int main()
// {
//     int highwayNumber;

//     cout << "Enter a Highway Number: ";
//     cin >> highwayNumber;

    // If you uncomment the code just make sure that you do not uncomment out the code below this statement before the if statement
    // determine if valid highway number. A highway is not valid if...
    // 1. if highway is less than 1
    // 2. if highway is > 999
    // 3. if highway ends in 00 Ex: 200
// below you will see a good example of if and else statements used together:
// if (highwayNumber < 1 || highwayNumber > 999 || highwayNumber % 100 == 0)
//     {
//         cout << highwayNumber << " is not a valid interstate highway number." << endl;
//     }
//     else
//     {
//         if (highwayNumber >= 1 && highwayNumber <= 99)
//         {
//             cout << "I-" << highwayNumber << " is primary, ";
//             if (highwayNumber % 2 == 0)
//             {
//                 cout << "going east/west" << endl;
//             }
//             else
//             {
//                 cout << "going north/south" << endl;
//             }
//         }
//         else
//         {
//             cout << "I-" << highwayNumber << " is auxiliary, ";
//             int primaryHighway = highwayNumber % 100;
//             cout << "serving I-" << primaryHighway << ", ";
//             if (highwayNumber % 2 == 0)
//             {
//                 cout << "going east/west" << endl;
//             }
//             else
//             {
//                 cout << "going north/south" << endl;
//             }
//         }
//     }
//  return 0;
// }

// Here will be our game code below that will use all of these concepts:
#include <iostream>
#include <string>
// below the ctime and cstdlib will help us use the rand() and srand() function
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    // Below will be our starting variables
    int bufalloKilled{0};
    int playerHealth = 100;
    string name;
    int playerStartMoney{104};
    int damageTaken{0};
    int bullets{30};
    // char represents letters and numbers
    char pick;

    // below we will make a variable which will use the random function to generate a number for damage the players gun makes
        // the srand() function will seed the random number generator with the current time to make sure there is a diffrent sequence of random numbers
    srand(time(NULL));
        // the code below will make sure that the number will be from  1-10. +1 in the code make sure that the number will never be 0
    int gunDamage{(rand() % 10) + 1};


    // Below will be the code for our story
    cout << 
    "After your successful gold mining adventure you now have "
    <<playerStartMoney <<" dollars." << endl;

    cout <<
    "Although you are starting to itch for the next adventure so you go to the trading outpost to see if there are any jobs for you to take. Lucky for you, there are are two jobs for you to take.\n 1.) Hunting buffulo with a local native American tribe \n 2.)Capturing a grizzly bear with some local cowboys and a painter named Charles Marion Russell \n what will you pick(1 or 2): " 
    << endl;
    // do not forget that pick is a char variable so we have to put qoutes around it when initualized
    // we use cin.ignore(); so that it does not affect any other cin usage later in our code
    cin >> pick;
    cin.ignore();
    // if pick is equal to 1 it will execute everything within the if statement
    if (pick == '1'){
        int strongBullets{0};
        cout <<
         "So you picked the buffalo hunting good choice, although you do know how dangerous it is, well its your funeral.\n" 
        << endl;
        cout << "You have " <<
         bullets << 
         " bullets with you but they are not strong enough to peirce through buffalo hide.\n You will have to buy stronger bullets.\n You go up to the weapons store and purchase " 
         <<(strongBullets += 10) 
         <<  " strong bullets for 6 dollars.\n You know have "
        //  you can us subtracting with combined assignment operation
         << (playerStartMoney -= 6) <<
          " dollars left. You ride out with the native americans and the leader of the party ask you for your full name. You say your name is: " 
          << endl;
        //   getline will get the entire line of user input
           
          getline(cin, name);
          
          cout <<
           " He says hello "
           << name 
           << " we are from the crow tribe and we thank you for joining us for this hunt.\n We will pay you 20 dollars for helping us and you get to keep 1 buffalo, but still kill as many as you can. " 
           << endl;
        // Im ussing cin.ignore(); just to clear cin out for later usage
             
         
        cout << 
        " You and the crow tribe ride up to where the buffalo herd and you see a vast population of buffalo. \n The crow tribe leader tells everyone that half of everyone should go to the left and the other half should go to the right which do you pick?\n (Right = r/ Left = l)"
        << endl;
        cin >> pick;
         
        if (pick == 'r'){
            cout << "You see a big buffalo that is twice as big as any buffalo you have ever seen in your life. \n You cock your lever action rifle and fire"
             << endl;
            //  the code below make sure that if the gunDamage is >=6 and <8 the if statement will show if it is not the else statement will show
                if(gunDamage >= 6){
                    cout << " your gun did " << gunDamage << "/10 damage to the buffalo. "<< " You successfully killed the buffalo!" << endl;
                }
                else{
                    cout << " your gun did " << gunDamage << "/10 damage to the buffalo. "<< " It. was not enough to kill the buffalo. The buffalo will live to see another day.\n Oh no! you are not getting paid but atleast the crow tribe will share some meat with you"<< endl;
                }
        }


        else if(pick == 'l'){
            cout << "You encouter alot of buffalo and it seems like they are practically sleeping. \n will you run towards them to shoot or slowly walk(Run = r / Walk = w) " << endl;
            cin >> pick;
             int buffaloShot{(rand() % 10) + 1};
                if(pick == 'r'){
                    int extraPerbuffalo{2};
                    cout <<
                    " You run towards the buffalo and just start to shoot at as many as you can. you manage to kill "
                    << buffaloShot 
                    << "buffalo nice you made 20 dollars.\n they were so nice that they give you an extra 2 dollars per buffalo meaning you earned an extra" 
                    << (extraPerbuffalo * buffaloShot) << " dollars. Horay!" << endl;
                }
                else if (pick == 'w'){
                    cout << "after walking towards the buffalo and then shooting them you end up killing "
                    << buffaloShot  
                    << " buffalo and they give you an extra 2 dollars per buffalo so now you have 20 dollars plus an added "
                    // for some reason using buffaloShot *= 2 messes up the code
                    << (buffaloShot * 2)
                    << " dollars. Good Job!" 
                    << endl;
                }
                else{
                cout << " You typed a character you were not supposed to what are you doing buddy??" << endl; 
                }

            
        }


        else{
            cout << " You typed a character you were not supposed to what are you doing buddy??" << endl;
        }
         

    }


    // if pick is equal to 2 then else if  will execute
    else if (pick == '2'){
        cout <<
        "You have chosen a dangerous adventure to go capture a bear.\n the painter and 3 other cowboys are accompaning you.\n before you head out with the other members of your party do you want to purchase a laso?(yes = y, No = n) "
         << endl;
         cin >> pick;
        char painterResponse;
         cout << " Do you want the painter Charles Marion Russell to help with the capture or to stay back?(yes = yes, No = no) " << endl;
         cin >> painterResponse;

         char getKnife;
         cout << "One of the cowboys is offering you a bowie knife do you take it(yes = y, No = n) " << endl;
         cin >> getKnife;
        
                if(pick== 'y' && painterResponse== 'y' && getKnife == 'n' ){
                    // below will be a variable that will give us a random number to capture the bear
                    int lassoStrenth;
                    cout << "So you chose to pick up the lasso, allow the painter to help, but chose to not pick up the knife.\n You and your party travel out and you see the bear.\n The bear is big and matted with long thick brown fur,\n it has scars all over its body from years of battle with other bears and people.\n Your party rides out whopping and yelling at the bear to get its attention and you ready your lasso to capture the beast.\n Type a number between(1-100) below to see what part of the bear you get with your lasso: " << endl;
                    cin >> lassoStrenth;
                        if(lassoStrenth <= 20 ){
                            cout << "You lasso'ed the bears head! good Job!" << endl;
                        }
                        else if (lassoStrenth <= 50){
                            cout << "You lasso'ed one of the bears arms" << endl;
                        }
                        else if (lassoStrenth <= 80){
                            cout << "You lasso'ed one of the bears legs" << endl;
                        }
                        else{
                            cout << " You Missed and the bear attacks you.\n The bears starts to maul you chewing on your arm as a cowboy shoots the bear in the head killing it.\n The mission was failure" << endl;
                        }
                }
//  the ! code below executes if the user pick up the knife but says no to the other options 
                else if (!(pick=='y' && painterResponse == 'y' && getKnife == 'n') ){
                    int knifeDamage{(rand() % 100) + 1};
                    cout << "You and the other cowboys ride out to capture the Grizzly bear.\n You being the crazy person ride out with the bowie knife in your hand and jump of your horse landing on the bear and stabbing it. " << endl;
                    if(knifeDamage <= 30){
                        cout << " You stabbed the bear in its heart and it died!" << endl;
                            
                    }
                    else if(knifeDamage <= 60){
                        cout << " You stabbed the bear in its head and it died!" << endl;

                    }
                    else{
                        cout << " You stabbed the bear in its stomach and it died!" << endl;
                    }
                }
                else{
                    cout << "you go on the mission and it is a complete succuess the painter see's an awe inspiring scence of cowboys lassoing a grizzly bear later inspiring him to paint an amazing painting" << endl;
                }
                 
    
    }


    // if pick is any other character then else code will execute
    else{
        cout << "you typed a number that was not one of the choices. WHY?" << endl;
    }
    return 0;
}
