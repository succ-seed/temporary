#include <iostream>
using namespace std;

class stringConcate
{
private:
    string str;

public:
    stringConcate()
    {
        str = "";
    }

    stringConcate(string a)
    {
        str = a;
    }

    stringConcate operator+(stringConcate b)
    {

        stringConcate c;
        c.str = str + b.str;
        return c;
    }

    void showString()
    {
        std::cout << str << std::endl;
    }
};

int main()
{
    stringConcate s1("Sandesh");
    stringConcate s2("Tiwari");

    stringConcate s3 = s1.operator+(s2);

    s3.showString();
}
