//! class to basic laijada, using OPERATOR CAST is necessary

#include <iostream>
using namespace std;

class conversionToClass
{
    string name;

public:
    conversionToClass(string x)
    {
        name = x;
    }

    void display()
    {
        std::cout << name << std::endl;
    }

    operator string()
    {
        return name;
    }
};

int main()
{

    // explicit call
    conversionToClass first = conversionToClass("Sandesh");

    // first.display();

    string name = first;
    std::cout << name << std::endl;

    return 0;
}