#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    int model_year;

    Car()
    {
        std::cout << "Please use parameterized constructor to provide input" << std::endl;
    }

    Car(string n, int m)
    {

        Name = n;
        model_year = m;
    }
};

int main(int argc, const char **argv)
{
    Car a;

    return 0;
}