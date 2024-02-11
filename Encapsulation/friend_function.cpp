#include <iostream>

class complex
{
private:
    int a, b;

public:
    void getNumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void sumNumber()
    {
        
    }
};

int main(int argc, const char **argv)
{

    complex c1, c2, c3;

    c1.getNumber(1, 1);
    c2.getNumber(1, 1);


    return 0;
}