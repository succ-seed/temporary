#include <iostream>
using namespace std;

inline void adder(int a, int b)
{
    cout << "sum is ->" << a + b << "\n";
}

int main()
{

    int a, b;

    cout << "enter 2 numbers to sum ";
    cin >> a;
    cin >> b;

    adder(a, b);

    return 0;
}


//? DOESNT WORK WITH RETURN TYPES
//? DOESNT WORK WITH LOOPS
//? FUNCTIONS HAVING STATIC VARIABLE
//? IF THE FUNCTION IS RECURSIVE
