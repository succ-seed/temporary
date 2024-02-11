// implicit -> compiler le afai gareko
// explicit -> user le gareko conversion

//* IMPLICIT CONVERSION
#include <iostream>

int main()
{

    implicitConversion();
    explicitConversion();

    return 0;
}

void implicitConversion()
{
    float b = 8.6;
    int a = b;
    std::cout << a << std::endl;
    return;
}

void explicitConversion()
{
    int a = 5;
    float b = 6.8;

    float sum = float(a) * b;
    return;
}