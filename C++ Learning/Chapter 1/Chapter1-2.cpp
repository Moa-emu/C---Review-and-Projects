// This will be a new and improved way of the first program that we made before and for this one I will show you how to modify the code so that we do not have to keep typing std:: prefix
// to do this we will put a new line that says using namespace std;

// THIS WILL COVER THE USING DIRECTIVE



#include <iostream>
// now we do not have to use the std:: prefix since we adding using namespace std; below
// The using directive gives acess to elements of the std namespace
using namespace std;
// I could also just use the using directive for only elements that I am explicitly using for example like (using std::cout;) and (using std::endl;)
 
 int main()  {
 cout<<
    " You wake up in an abyss of fogginess as your clothes are tarnished and ragged. The ones who got one over on you atleast had the decency to leave you with your cowboy hat, but as for your horse, rifle and any other belongings you seem to have had are all gone. You stand up with pain wincing all over your body as the unmerciful sun beats you all over your body as if it were trying to cook you well done for the buzzards, coyotes and all other varmits who are set on eating your flesh. The only thing you do now is walk in the direction you belive will lead you to salvation." 
    << endl;
 
    return 0;
}