#include <iostream>
using namespace std;

class complex
{
protected:
    int real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }

    complex(int a, int b)
    {
        real = a;
        imag = b;
    }

    complex operator+(complex a)
    {
        complex c;
        c.real = real + a.real;
        c.imag = imag + a.imag;

        return c;
    }

    complex operator*(complex a)
    {
        complex c;

        c.real = (real * a.real) - (imag * a.imag);
        c.imag = (real * a.imag) + (imag * a.real);

        return c;
    }

    void display()
    {

        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main()
{
    int real;
    int imag;

    std::cout << "----First-Complex----" << std::endl;
    std::cout << "Real      :";
    cin >> real;
    std::cout << "Imaginary :";
    cin >> imag;

    complex a(real, imag);

    std::cout << "----Second-Complex----" << std::endl;
    std::cout << "Real      :";
    cin >> real;
    std::cout << "Imaginary :";
    cin >> imag;

    complex b(real, imag);

    // ADDITION
    complex c = a.operator+(b);
    std::cout << "Addition :: ";
    c.display();

    // MULTIPLICATION
    complex d = a.operator*(b);
    std::cout << "Multiplication ::";
    d.display();
}