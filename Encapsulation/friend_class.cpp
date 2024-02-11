#include <iostream>

class values
{
private:
    int a, b;

public:
    int sum;
    void get_value(int c, int d)
    {

        a = c;
        b = d;
    }

    void summer()
    {
        sum = a + b;
    }

    friend class displayer;
};

class displayer
{
public:
    void display_value(values &inst1)
    {
        std::cout << "sum = " << inst1.sum << std::endl;
    }

    friend class values;
};

int main(int argc, char const *argv[])
{

    values inst1;
    inst1.get_value(4, 5);
    inst1.summer();

    displayer inst2;

    inst2.display_value(inst1);

    return 0;
}
