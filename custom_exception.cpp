#include <iostream>
#include <exception>
using namespace std;

class Sandesh
{
public:
    Sandesh()
    {
        cout << "Height is ";
    }
    int length()
    {
        return 132;
    }
};

int main()
{
    try
    {
        throw Sandesh();
    }
    catch (Sandesh s)
    {
        cout << s.length() << endl;
        cout << "Exception " << endl;
    }
}