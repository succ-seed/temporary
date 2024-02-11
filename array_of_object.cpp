#include <iostream>

using namespace std;

class Employee
{
    string name;
    static int counter;

public:
    void get_name()
    {
        cout << "Employee name " << counter << ":";
        getline(cin, name);
        counter++;
        show_name();
    }

    void show_name()
    {
        cout << "EMP NO\t"
             << "NAME" << endl;
        cout << counter << "\t" << name << endl;
    }
};

int Employee::counter = 1000;
// ! BY DEFULT PANI VALUE 0 NAI HUNXA SO ITS OKAY IF WE DONT MENTION 0 TOO
// * WE CAN ALSO START AT A CUSTOME STARTING POINT LIKE 1000 OR SOMETHING

int main(int argc, const char **argv)
{
    Employee list[5];

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        list[i].get_name();
    }

    return 0;
}