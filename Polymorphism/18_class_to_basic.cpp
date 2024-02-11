//! class to basic laijada, using OPERATOR CAST is necessary

#include <iostream>

class conversionToClass
{
    int num;

public:
    conversionToClass(int x)
    {
        num = x;
    }

    void display()
    {
        std::cout << num << std::endl;
    }

    operator int()
    {
        return num;
    }
};

int main()
{

    conversionToClass first(12);
    first.display();

    int num = first;
    std::cout << num << std::endl;

    return 0;
}