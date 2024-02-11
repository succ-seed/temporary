#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

int main()
{
    int a;
    int b;

    std::cout << "Enter number 1: " << std::endl;
    std::cin >> a;
    std::cout << "Enter number 2: " << std::endl;
    std::cin >> b;

    try
    {
        if (b == 0)
        {
            throw invalid_argument("cannot divide by 0");
        }

        int divisiion = a / b;
    }
    catch (const exception &b)
    {
        cerr << b.what() << endl;
    }
}