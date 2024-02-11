#include <iostream>
using namespace std;

class unary
{
    int x;

public:
    void getdata(int a)
    {
        x = a;
    }

    void operator--()
    {

        x--;
    }

    void operator++()
    {
        x++;
    }

    void show()
    {
        std::cout << x << std::endl;
    }
};

int main()
{
    unary u;
    u.getdata(5);
    u.operator++();
    u.show();
    u.operator--();
    u.show();

    ++u;
    //* ++ le direct operator++ ma laijanxa, automatically
    //* object le prefix ma matra kam garxa, so u++ hudaina;

    u.show();
}