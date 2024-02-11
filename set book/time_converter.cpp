#include <iostream>

using namespace std;

class time_converter
{
private:
    int hour, min, sec;

public:
    time_converter()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }

    time_converter(int a, int b, int c)
    {
        hour = a;
        min = b;
        sec = c;
    }

    friend time_converter operator+(time_converter, time_converter);

    void show_time_converter()
    {
        cout << "SUM -> " << hour << ":" << min << ":" << sec << endl;
    }
};

time_converter operator+(time_converter s, time_converter r)
{
    time_converter temp;

    // checking and adding second
    temp.sec = r.sec + s.sec;

    int sec_holder;
    int minute_overflow;

    if (temp.sec >= 60)
    {
        sec_holder = temp.sec % 60;
        temp.sec = temp.sec - sec_holder;
        minute_overflow = temp.sec / 60;
        temp.sec = sec_holder;
    }

    // checking and adding minute
    temp.min = r.min + s.min + minute_overflow;

    int min_holder;
    int hour_overflow;

    if (temp.min >= 60)
    {
        min_holder = temp.min % 60;
        temp.min = temp.min - min_holder;
        hour_overflow = temp.min / 60;
        temp.min = min_holder;
    }

    temp.hour = r.hour + s.hour + hour_overflow;

    return temp;
}

int main()
{
    int hour, min, sec;
    std::cout << "----TIME-1----" << std::endl;
    std::cout << "Hour   : ";
    cin >> hour;
    std::cout << "Minute : ";
    cin >> min;
    std::cout << "Second : ";
    cin >> sec;

    time_converter a(hour, min, sec);

    std::cout << "----TIME-2----" << std::endl;
    std::cout << "Hour   : ";
    cin >> hour;
    std::cout << "Minute : ";
    cin >> min;
    std::cout << "Second : ";
    cin >> sec;

    time_converter b(hour, min, sec);

    time_converter c = a + b;

    c.show_time_converter();
}