// USING BREAK AND CONTINUE STATEMENTS
// -break statements: this is what you can use to exit a loop
// -continue statement: this is what you can use to jump directly to the top of a loop
// QUICK TIP: use these sparingly only when you really need them




// Here is our code: 
#include <iostream>
using namespace std;

int main(){
    // In this example we will show how we can skip 5 in while loops using continue and how to stop a loop using break; 

    // Below we will intilize the variable that will be used in the while loop
    int count{0};
    while (count <= 10){
       
        if (count == 5){
             count++;
            // when count is equal to 5, the continue statement causes the loop to skip the rest of the code and just move on to the next iteration which makes 5 not printed
            continue;
        }
        cout << count << endl;
        if (count == 9){ 
            // the break statement will stop the loop at 9
            break;
        }
        count++;
       
    } 
    
    return 0;
}