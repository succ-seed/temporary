#include <iostream>
using namespace std;

template <class T>

inline T greater_of_two(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    int a, b;
    std::cout << "give 2 numbers" << std::endl;
    cin >> a;
    cin >> b;

    std::cout << greater_of_two(a, b) << " is the greater one" << std::endl;

    return 0;
}