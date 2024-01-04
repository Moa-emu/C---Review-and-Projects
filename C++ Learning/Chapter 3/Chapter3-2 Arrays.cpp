// Using ARRAYS
// - arrays allow you to work with elements of any type
// - You can use arrays to storge intergers, strings or whatever you want.
// There are also c arrays where they do not know their own size and the programmer must be responsible for managing the size of the array
 
//  A good way of thinking of an array would be in the context of an rpg game
// ex: your hero's inventory is represented by an array. this array is sequence of string objects one for each item in the hero's possession.

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Creating Arrays
// REMEMBER that arrays begin at 0 like all list based things in programming
// -when creating Arrays The first thing that you have to consider is the size of the array, so that your compiler can be able to reserve the necessary memory space
// - that is why in the example below we will make a constant for the number of elements in the array.
// look at the example below:
// ex:  const int MAX_ITEMS = 10;
//      string inventory[MAX_ITEMS];
// in the example above you can see that we created an array called inventory which is a string.
// In other words it is an array called inventory of MAX_ITEMS string objects.
// Because of the const MAX_ITEMS we know that inventory can only contain 10 items.

// Quick tip you can also initialize arrays with values
// ex: string inventory[MAX_ITEMS] = {"sword", "armor", "sheild"};
// Quick Fact if you do not put the size of the array when initializing it with values it will be created with a size equal to the number of elements inside of its list
// ex: string inventory[] = {"sword", "armor", "shield"} --there are three elements in the array the array is initialized to three elements

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Indexing ARRAYS
// - just like strings you can be able to index arrays
// - indexing arrays is a way for you to add items, delete items, and change items within your array
// ex: int numItems = 0;
// ex: inventory[numItems++]= "sword";
// ex: inventory[numItems++]= "armor";
// ex: inventory[numItems++]= "sheild";
// ex: inventory[numItems++]= "bow";
// You can see that above i first defined numItems at 0 so that there would be no items within the array
// Next I continue to add items into the array with the numItems++ which will add the strings into the array

// To display all of the items within an Array I will have to use a for loop 
// ex: for(int i = 0; i < numItems; i++){
//  cout << inventory[i] << endl;
// }

// -------------------------------------------------------------------------------------------------------------------------------------------------------------
// LASTLY BUT NOT LEAST  
// Accessing Member Function of an Array Element
// - just like with objects in c++ you can also implement member function on array elements 
// ex: inventory[0].size - this will apply the size() function on item 0 in the inventory item which will inturn show the amount of characters in the object

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// I LIED THERE IS ONE LAST THING WE NEED TO TALK ABOUT 

// REMEMBER THAT ARRAYS HAVE A FIXED SIZE THAT YOU CAN NOT MEDDLE WITH ESPECIALLY WHEN YOU PUT IT'S SIZE TO A CONSTANT NUMBER

#include <iostream>
#include <string>
using namespace std;

int main(){
    // below will be our variables
    string name;
    const int MAX_STORAGE{3};
    // the code below will give inventory a size of 3, from positon 0-2
    // Remember that you have to give your arrays a size or it will not work and problems will occur 
    string inventory[MAX_STORAGE];
    int itemsgained{0};
   

    cout << " Hello brave adventurer what is your name: " << endl;
    getline(cin, name);
    cout << " Welcome " << name << " , you will go on a great adventure to slay a demonic dragon!!!!" << endl;

    cout << " Lets see what you have in your inventory " << itemsgained << ". Looks like you have nothing, lets go get you some stuff!" << endl;

    cout << " As you are walking you see a sword stuck in a stone, you pull it out and nice the sword is out!!!" << endl;
    // Below we added the string sword to the inventory array
    // the string sword will be stored at postion 0 in the inventory string 
     inventory[itemsgained++] = "sword";

    cout << " You have now gained a " << inventory[0] << endl;
    cout << " As you are walking with your new shiny sword you see that there is a merchant selling armour you buy the armor by kind of just stealing it, even though that is not very heroic." << endl;
    inventory[itemsgained++] = "armour";
    cout << " Now in your inventory you have: " << endl;
    
    // The for loop will print out everything within the inventory
    for (int i = 0; i < itemsgained; ++i)
    {
        cout << inventory[i] << endl;
    }
    char answer;
    cout << " As you are traveling down the forest a woman ask her if you could escort her to the next village will you help her (yes=y / no=n): " << endl;
    cin >> answer;
    if (answer == 'y')
    {
        cout << " The woman thanks you for helping her and she gives you a healing potion for thanks!!" << endl;
        inventory[itemsgained++] = "healing potion";

        cout << "Lets now see everything in your inventory now: " << endl;
        for ( int i = 0; i < itemsgained; i++){
            cout << inventory[i] << endl;
        }

        
        cout << " As you are walking into this new village a blacksmith admires the sword that you have and wants to trade with a very powerful battle axe.\n You trade your sword lets look at your inventory now: " << endl;

        // we are going to switch one of the items that is in the  array sword will change to battle axe
        inventory[0] = "battle axe";
        cout << "Lets see your inventory now: " << endl;
        for (int i = 0; i < itemsgained; i++)
        {
            cout << inventory[i] << endl;
        }

        // now we will make code so that if the player want to add another item when their the inventory is full it will say that their inventory is full and there is no other space
        cout << " On the final leg of your journey before you slay the dragon, You see a old man.\n The old man wants to give you a fire resistant potion, but do you have enough space in your inventory space: " << endl;

            if(itemsgained < MAX_STORAGE){
                cout << " You have enough space" << endl;
                inventory[itemsgained++] = "fire resistant Potion";
                cout << " You just gained a fire resistant position";
            }
            else{
                cout << " You do not have enough space!" << endl;
            }

            // The last thing we will do is to show how you can use member function on arrays
            // we will use the size() function to see how many characters are in inventory[0] in the array
            cout << "Here are how many characters in your first item: " << inventory[0].size() << endl;
        
    }
    else{
        cout << " You left the woman by herself as she now has to vehemently wait for a knight to help her. You are not being a good person" << endl;
    }
    
    
 
    return 0;
}