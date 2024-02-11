#include <iostream>
using namespace std;

class swapper
{
private:
    int *a;
    int *b;

public:
    void take_input(int *q, int *w)
    {
        a = q;
        b = w;
    }

    void swapping_mech()
    {
        int *temp;
        temp = a;
        a = b;
        b = temp;
    }

    void display()
    {
        std::cout << "swapped : " << *a << "\t" << *b << std::endl;
    }
};

int main()
{

    int a, b;

    std::cout << "Enter number 1: ";

    cin >> a;

    std::cout << "Enter number 2: ";

    cin >> b;

    swapper ab;
    ab.take_input(&a, &b);
    ab.swapping_mech();
    ab.display();
}