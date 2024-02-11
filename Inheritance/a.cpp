#include <iostream>

class a
{
public:
    void show()
    {
        std::cout << "hello" << std::endl;
    }
};

class b : public a
{
};

class c : public b
{
};

int main()
{
    c ins1;
    ins1.show();
}