//  Using the Switch Statement 
// - the switch statement is an alternative way for c++ programmers to create multiple branching options just like if and else statements
// below is an example of how you can make switch statments
// ex: switch (expression)
//      {
//      case value1: statement1;
//                   break;
//      case value2: statement2;
//                   break;
//      default: statement3;
//      }

// -The purpose of a switch statement is to evaluate an expression/variable, its value is compared with each of the cases to find a match when a match is found that case's code will be executed
// -Make sure to put a break after each code statement, the break statement is used exit the switch statement without putting a break it will go to the next case's code block which will cause problems
// -A default case is optional, if none of the cases are activated then the default case will be activated
// -Switch statements must have at least 1 case statement and 1 default statement 

// Here is an example below
#include <iostream>
#include <string>
 
using namespace std;
int main(){
    cout << "You ride back into the town after a week of adventuring, when you come back you see a crowd gathered wooing and yelling as if there is a carnival in town.\n When you make your way through the crowd you see there is a quick draw competition.\n You belive that you can take them on so you enter the competition.\n Choose who you will compete against.\n 1 - Mike(Easy-level-Shooter)\n 2 - Wallace(Normal-level-Shooter)\n 3 - Mcarthy(Hard-level-Shooter-has never lost a quick draw)" << endl;
    cout << "Choice number: " << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
        // Remember the expression that you want to test needs to be next to the case. ex case(expression)
    case 1:
        cout << "you chose Mike this will be a easy quick draw! " << endl;
        break;

    case 2:
        cout << "you chose Wallace this will be keep on your toes he's a strong one! " << endl;
        break;

    case 3:
        cout << "you chose Mcarthy you will probably die! " << endl;
        break;
    
    default:
        cout << "Invalid Choice !!!!! " << endl;
        break;
    }

    // Below will be an example of how you can use a switch statement to make a calculator
    cout << "THIS IS A CALCULATOR!!!! put in two numbers and between them the operation that you want to use." << endl;
    float number1;
    float number2;
    char opperation;
    cout << "First Number: " << endl;
    cin >> number1;
    cout << "Operation: " << endl;
    cin >> opperation;
    cout << "Second Number: " << endl;
    cin >> number2;

    switch (opperation)
    {
    case '+':
        cout << "You picked additon here is " << number1 << " plus " << number2 <<" the result of the operation is: " << number1 + number2 << endl;
        break;
    
    case '-':
        cout << "You picked subtraction here is " << number1 << " minus " << number2 <<" the result of the operation is: "<< number1 - number2 << endl;
        break;

    case '*':
        cout << "You picked multiplaction here is " << number1 << " multiplied by " << number2 << " the result of the operation is: " << number1 * number2 << endl;
        break;

    case '/':
        cout << "You picked division here is " << number1 << " divided by " << number2 << " the result of the operation is: " << number1 / number2 << endl;
        break;
    
    default:
        cout << "You picked an invalid operatior" << endl;
        break;
    }


    return 0;
}