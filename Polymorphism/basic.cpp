#include <iostream>
using namespace std;

int main()
{
    int l, b, h;

    std::cout << "Enter length" << std::endl;
    cin >> l;
    std::cout << "Enter breadth" << std::endl;
    cin >> b;
    std::cout << "Enter height" << std::endl;
    cin >> h;

    int area = 2 * h * (l + b);

    std::cout << "Area of 4 walls = " << area << "cm^2" << std::endl;
    return 0;
}