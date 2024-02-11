#include <iostream>

class uniary
{
private:
    int x;

public:
    void getdata(int a)
    {
        x = a;
    }

    // UNIARY OPERATOR
    void operator++()
    {

        x++;
    }

    void operator--()
    {
        x--;
    }

    void show()
    {
        std::cout << "Value of x is -> " << x << std::endl;
    }
};

int main()
{
    uniary inst1;

    inst1.getdata(1);

    inst1.operator++();
    inst1.show();

    ++inst1;
    inst1.show();

    inst1.operator--();
    inst1.show();

    --inst1;
    inst1.show();
}