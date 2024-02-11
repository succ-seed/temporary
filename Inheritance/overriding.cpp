#include <iostream>

class a
{
public:
    void show()
    {
        std::cout << "Base class" << std::endl;
    }
};

class b : public a
{
public:
    void show()
    {
        std::cout << "Derived class" << std::endl;
    }
};

int main()
{

    b obj;

    obj.a::show();

    // obj.show();
}