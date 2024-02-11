#include <iostream>

class copy
{
private:
    int a, b;

public:
    copy(int c, int d)
    {
        a = c;
        b = d;
    }

    copy(const copy &c)
    {
        a = c.a;
        b = c.b;
    }

    void show()
    {
        std::cout << a << b << std::endl;
    }
};

int main()
{
    copy c(4, 5);
    copy d = c;

    d.show();

    return 0;
}