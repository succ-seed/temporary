#include <iostream>

class a
{
public:
    void show()
    {
        std::cout << "hello" << std::endl;
    }
};

class b
{

public:
    void display()
    {
        std::cout << "hi" << std::endl;
    }
};

class c : public a, public b
{
};

int main()
{
    c ins1;
    ins1.show();

    c inst2;
    inst2.display();
}