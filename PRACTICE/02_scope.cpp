#include <iostream>

int a = 6; //? FILE SCOPE

class Adder
{

private:
    int a; //? CLASS SCOPE
           //* FILE SCOPE KO a VARIABLE WILL BE HIDDEN IN CLASS NOW

public:
    void pushValue(int c)
    {
        //? c HAS FUNCTION SCOPE
        a = c;
    }

    void getValue()
    {
        std::cout << "Value is " << a << std::endl;
    }
};

int main(int argc, const char **argv)
{

    Adder inst1;
    inst1.pushValue(a);
    inst1.getValue();

    return 0;
}