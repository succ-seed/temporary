#include <iostream>

using namespace std;

class converter
{
public:
    string name;

    converter()
    {
        //! default constructor rakhnai parxa
    }

    void get_value(string s)
    {
        name = s;
    }
};