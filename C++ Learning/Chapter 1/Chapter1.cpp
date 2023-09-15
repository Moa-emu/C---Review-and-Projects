// This will be a breif Review over all of C++ that I did in Southern Methodist University
// Although to make it fun we will be learning C++ by creating games


//Begining of the users journey
// This will cover the INCLUDE, INT MAIN(){} , COUT, ENDL, and Return0.

// Below we are using the include iostream so that we can use all files within the standard library which makes life easier
// #include keyword is used to indicate importing a file into our program
#include <iostream>

//Every C++ program must have main() function
// int indicates that the function will return an interger value
// Remember that since we are using a function we have to include curly braces{}
int main()  {
    // std::cout<< will display things to the output, because we includeded iostream we are able to use cout,
    //  the std prefix will just make sure that it identifes that we want an operator such as cout from the standard library
    // <<std::endl; endl is just like pressing the enter keyin the console windo so any other code below it will apear on the next line
    // also a quick tip the << is basically the output operator which will send the string to cout
    // make sure to end each line of code with a (;) semicolan
    std::cout<<
    "You wake up in an abyss of fogginess as your clothes are tarnished and ragged. The ones who got one over on you atleast had the decency to leave you with your cowboy hat, but as for your horse, rifle and any other belongings you seem to have had are all gone. You stand up with pain wincing all over your body as the unmerciful sun beats you all over your body as if it were trying to cook you well done for the buzzards, coyotes and all other varmits who are set on eating your flesh. The only thing you do now is walk in the direction you belive will lead you to salvation." 
    <<std::endl;
    // the return 0 wil return  0 to the operating system
    return 0;
}