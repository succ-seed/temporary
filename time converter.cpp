#include <iostream>

class time_converter
{
private:
    int h, m, s;

public:
    time_converter()
    {
        h = 0;
        m = 0;
        s = 0;
    }

    time_converter(int hours, int minutes, int seconds)
    {

        h = hours;
        m = minutes;
        s = seconds;
    }

    friend time_converter operator+(time_converter, time_converter);

    void show_time_converter()
    {
        std::cout << h << ":" << m << ":" << s << std::endl;
    }
};

time_converter operator+(time_converter a, time_converter b)
{
    time_converter c;
    c.h = b.h + a.h;
    c.m = b.m + a.m;
    c.s = b.s + a.s;

    return c;
}

int main()
{
    time_converter a(2, 2, 2);
    time_converter b(2, 2, 2);

    time_converter c = a + b;

    c.show_time_converter();

    return 0;
}