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

        std::cout << counter << "\t" << name << std::endl;
    }

    static void count()
    {
        std::cout << "\nThe current value of counter is " << counter << std::endl;
        // only counter can be used in this function, non-static variable like name cant be used here
    }
};

int Employee::counter = 1000;
// ! BY DEFULT PANI VALUE 0 NAI HUNXA SO ITS OKAY IF WE DONT MENTION 0 TOO
// * WE CAN ALSO START AT A CUSTOME STARTING POINT LIKE 1000 OR SOMETHING

int main(int argc, const char **argv)
{
    Employee a, b, c;
    std::cout << /*  */ "EMP NO\t"
              << "NAME" << std::endl;

    // INPUT
    a.get_name("Sandesh Tiwari");
    Employee::count();
    //* a.count(); works too
    //* To access other methods and variable we have to use object, but to access static variable and functions we cn directly do it using scope resolution

    b.get_name("Prashish Sapkota");
    Employee::count();

    c.get_name("Hrishav Tiwari");
    Employee::count();

    // Employee::get_name("Bisu Tiwari");

    return 0;
}