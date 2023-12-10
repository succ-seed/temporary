//!  when we make a class, there's variables and there are method or function
//! lets take a example of variable being glass and method being a container of juice
//! for every object or person, we have different glass but the container that we pour from is the same

//! similiarly in c++, for every different object, individual variable is made, but the method/function is made once and shared

#include <iostream>

using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    string name;

public:
    void initcounter(void)
    {
        std::cout << "" << std::endl;

        counter++;
    }
};