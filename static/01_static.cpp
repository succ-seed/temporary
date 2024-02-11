#include <iostream>

using namespace std;

class Employee
{
    string name;
    static int counter;

public:
    void get_name(string a)
    {
        name = a;
        counter++;
        show_name();
    }

    void show_name()
    {
        std::cout << /*  */ "EMP NO\t"
                  << "NAME" << std::endl;
        std::cout << counter << "\t" << name << std::endl;
    }
};

int Employee::counter = 1000;
// ! BY DEFULT PANI VALUE 0 NAI HUNXA SO ITS OKAY IF WE DONT MENTION 0 TOO
// * WE CAN ALSO START AT A CUSTOME STARTING POINT LIKE 1000 OR SOMETHING

int main(int argc, const char **argv)
{
    Employee a, b, c;

    a.get_name("Sandesh Tiwari");
    // a.show_name();

    b.get_name("Prashish Sapkota");
    // b.show_name();

    c.get_name("Hrishav Tiwari");
    // c.show_name();

    return 0;
}