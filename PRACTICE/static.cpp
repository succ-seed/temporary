#include <iostream>
using namespace std;

class empInfo
{
private:
    string name;
    static int counter;

public:
    empInfo(string name1)
    {
        name = name1;

        display();
        incrementer();
    }

    void display()
    {
        std::cout << counter << "\t" << name << std::endl;
    }

    static void incrementer()
    {
        counter++;
    }

    void decrement();
};

int empInfo::counter = 0;

void empInfo::decrement()
{
    std::cout << "WHAT" << std::endl;
}

int main()
{

    empInfo e1("sandesh");
    empInfo e2("sandesh");
    empInfo e3("sandesh");
    empInfo e4("sandesh");
    empInfo e5("sandesh");
    e5.decrement();
}