// THIS SECTION WILL GO OVER UPDATING VARIABLE VALUES AND CONSTANTS AND SIZEOF(), AND OTHER CMATH STUFF


// Here is a quick little tip 
// int y{10}; - this is Variable List Initialization which is another way to initialize a variable
// another example char grade{'A'};
// --------------------------------------------------------------------------------------------------------------------------------------------------------

// When updating/altering variables using arithmetic operators there are many diffrent ways to go about it
//  -There is the basic way we will use the variable of bonus as an example below for the basic way
        // -  bonus = bonus + 100; or bonus = 100 -50; or bonus = 100 / 50; or bonus = 100 * 50; and so on
        // - bonus = bonus + 100; if this is the first line of us initailizing our bonus variable it will just add 100 to bonus variable, the bonus + 100 can be interpreted as 0 + 100 which will give bonus an added value of 100

// - Altering variables using combined Assignment Operators: this is a shorter way than the basic way above
        // - score += 100  is the same as score = score + 100
        // other ways to do this include 
        // score -= 100 equal to score = score - 100
        // score *= 100 equal to score = score * 100
        // score /= 100 equal to score = score / 100
        // score %= 100 equal to score = score % 100

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// - Altering variables using Increment and Decrement operators
        // - The increment operator(++) will increase a variable by the value of 1
        
                // -ex: ++score; and score++; will do the same thing which is increase the score by 1 although when in an expression they both do diffrent things
                
                //  ++score is a prefix increment operator 
                    // example with prefix increments
                    // score = 3;
                    // int bonus = ++score * 10 
                    // - in the code code above since we are incrementing score by 1, score will now be the value of 4
                    // - and when calculating the bonus,  bonus will equal 4 * 10 which is 40


                // score++ is a postfix increment operator
                    // example with a postfix increment
                    // score = 3;
                    // int bonus = score++ * 10
                    // - in the code above postfix will increment the variable after the operation
                    // - so bonus will equal 30 because score is not incremented in the operation
                    // -but score will equal 4 because score++ will only increase the value of score after the operataion

        // - The Decrement operator(--) will decrease a variable by the value of 1, it can also use prefix and postfix
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// -Overflow and Interger wrap around
        // Overflow- happens when a variable's value exceeds its allocated memory space, which can result with errors
        
        // Interger Wrap around - occurs when you increase an interger beyond it maximum value, you will not get an error but it will go back to its minnimum value
                    // ex: bonus = = 4294967295;
                    //     ++bonus; will make bonus become 0 because it has gone beyond its maximum value

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Constants
// constants are variables that hold an unchangable value. If you try to change them you will get errors
// constants should always be upercase when defining their variable value look below for an example
// ex: const int SWORD_STRENGTH = 150
// - you havbe to put const when defining a constant in c++

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Enumeration
// enumeration is a set of usigned(always positive) interger constants which are called enumerators, the usually have a particular order
// ex: enum difficulty {EASY, NORMAL, HARD, HARDCORE, UNFORGIVING }
// - in the example above you will see that I created an enumeration called difficulty which also could be known as a new enumeration type I made.
// - each item within the enumeration is assigned a number. Remember that enumerators begin at 0 so EASY=0, NORMAL=1, HARD=2, HARDCORE=3, and UNFORGIVING=4. 

// Creating a variable of the new enumeration type that you made look below
//  ex: difficulty myDifficulty = EASY; 
// the variable myDifficulty is set to Easy which is equal to 1
// you can create variables that can hold any enumeration value as long as you first put the name of the enumeration you want the variable to tap into

// Assigning enumerators values 
// ex: enum pickAxeQuality {DECENT_QUALITY = 25, GOOD_QUALITY , AMAZING_QUALITY = 50}
// - you can see in the enumeration above I define the enumeration of pick axe quality which some are assigned a specific cost

// - Remember that any enumerators that you do not give a set quantity will get the value of the previous enumerator plus 1 
// - that means that GOOD_QUALITY is equal to 26 since it does not have a set quality
//  I can even assign  a new varaiable of pickAxeQuality newPickAxe = GOOD_QUALITY; this will make newPickAxe = 26
//  if I did an operation like (AMAZING_QUALITY - newPickAxe) the result will equal 50 - 26 = 24

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout 
    << "After you have earned $100 from saving cows from the cattle theives, you decide like the good capitalist you are to get more. Well I guess lucks on your side because there seems to be a gold rush near some terrain next to the town. You decide to pack up your gear and your horse to leave next thing in the morning." 
    << endl;
    // below is me defining and initializing a const variable
    const int PICKAXE_QUANTITY = 1;
    string name;

    // below you will see me Variable List Initialization
    int goldQuantity{0};

    double moneyPerGold = 20.75;
    double playerTotalMoney = 100;

    // Below will be my enumeration
    enum pickAxeCost{ GOOD_PICKAXE = 25, DURABLE_PICKAXE, AMAZING_PICKAXE = 50 };
    pickAxeCost yourPickAxe = DURABLE_PICKAXE;

    cout <<
     " when you arrive at the mountain you realize that you need to buy a pick Axe, so you go to the nearest shop and ask buy an pickAxe. The man ask you for your name which you say is "
     << endl;
     cin >> name;
     int playerNewAmount = playerTotalMoney - yourPickAxe;
     cout << " The shop owner greets you saying hello " 
     << name 
     << ". How many pickAxes do you want to buy? You reply with "
    //  below we are using our const value
     << PICKAXE_QUANTITY << ". He shows you all of the pickAxes and you decide to buy a durable pickaxe which cost "
     << yourPickAxe 
     << " dollars. You give him 100 dollars and he gives you back " <<
    //  below we are doing an operation between our enumeration variable and another variable we created
    playerNewAmount
     << " dollars. You head to the south side of the mountain and start digging for gold. Lucky you you find 1 peice of gold."
     << endl;
    // below we are incrementing the gold quantity by 1 and multiplying it by another variable. So that means that gold 
      int newMoney = ++goldQuantity * moneyPerGold;
   int secondPlayerTotal = playerNewAmount + newMoney;
     cout << "your gold quantity is now up to " <<
    //  since we increased goldQuantity above in the operation goldquantity is now up to 1
      goldQuantity << " piece in your inventory. you have now gained "<<
      newMoney << " dollars. you now have " << secondPlayerTotal
      <<" dollars."
      << endl;
       // this will increase new money by 10
     secondPlayerTotal += 10;
    cout << "You also get an added finders fee of 10 dollars which brings your money to now "<< secondPlayerTotal << 
    " dollars." << endl;
    return 0;
}