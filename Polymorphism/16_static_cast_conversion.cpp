#include <iostream>

void staticCast(float a, float b);

int main(int argc, const char **argv)
{

    float a = 69.69;
    float b = 420;

    staticCast(a, b);

    return 0;
}

void staticCast(float a, float b)
{
    float mod = a * b;

    int c = static_cast<int>(mod);

    std::cout << mod << std::endl; // normal
    std::cout << c << std::endl;   // static cast
    return;
}