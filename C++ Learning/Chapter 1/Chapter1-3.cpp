// In this lesson we will be dealing with how we can use arithmatic(math) in c++

#include<iostream>
using namespace std;

int main(){
    // Below is the begining of the story
     cout<<
    " You wake up in an abyss of fogginess as your clothes are tarnished and ragged. The ones who got one over on you atleast had the decency to leave you with your cowboy hat, but as for your horse, rifle and any other belongings you seem to have had are all gone. You stand up with pain wincing all over your body as the unmerciful sun beats you all over your body as if it were trying to cook you well done for the buzzards, coyotes and all other varmits who are set on eating your flesh. The only thing you do now is walk in the direction you belive will lead you to salvation. \n" 
    << endl;

    cout<<
     "You keep walking for miles and miles in the endless strech of unforgiving desert. Every step that you make feels as if your legs are further sinking into the hot sands of the desert, though you feel unyeilding pain you continue, as if sheer luck is on your side you can see a nearby town your zombie like walk soon becomes a trot and then a full fledged run as you pace closer and closer to the town all the while as you scream WATER!, WATER!, WATER!... until you ultimatley pass out. \n"
      << endl;

    cout<<
      "You awake in a doctors office as your eyes dart to map out the contents of the doctors office you see many tools for surgery and also a plaque of achivement for helping wounded soldiers in the civil war. A female doctor comes in the room and she ask you if you know your basic arithmetic and you answer yes! she then starts to barage you with many simple arithmatic questions to gauge whether your in your right mind.\n"
      <<endl;

    cout<< 
    " she says whats 7 + 3 =  you respond "<< 7 + 3 <<".\n"
    <<endl;

    cout<< 
    " she says whats 7 - 3 =  you respond "<< 7 - 3 <<".\n"
    <<endl;

    cout<< 
    " she says whats 7 * 3 =  you respond "<< 7 * 3 <<".\n"
    <<endl;

    // doing division in C++ will just give you a rounded number 
    cout << " she says whats 7 / 3 =   you respond " << 7 / 3 << endl;

    // doing division with a .0 on both numbers will give you the actual calculator value
    cout << " she says whats 7.0 / 3.0 =   you respond " << 7.0 / 3.0 << endl;

    // MODULO will just give the remainder of a division
    cout << "she says whats 7 % 3 =   you respond " << 7 % 3 << endl;

    // Below you can see that PEMDAS WILL FOLLOW IN C++ ARITHMATIC
    cout << "she says whats 7 + 3 * 5 =   you respond " << 7 + 3 * 5 << endl;
    cout << " she says whats (7 + 3) * 5 =   you respond " << (7 + 3) * 5 << endl;

     

    return 0;
}