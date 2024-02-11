#include <iostream>
class complex
{
    int real, imaginary;

public:
    complex()
    {
        // defult constructor chai jaile define garna parxaaaa
        real = 0;
        imaginary = 0;
    }

    complex(int re, int im)
    {
        real = re;
        imaginary = im;
    }

    void show()
    {
        std::cout << real << "+" << imaginary << "i" << std::endl;
    }

    complex operator+(complex b)
    {
        // creating temporary instance of class inside of same class nai
        complex temp;
        //* temp can now have access to variables real and imaginary thats in private scope
        //*  this method will pull first value automatically, cant pass two object
        //? that is real and imaginary will be passed here from first object
        // for friend function, we have to do : friend complex operator+(complex b, complex d)

        temp.real = real + b.real;                // real automatically aauxa from first object
        temp.imaginary = imaginary + b.imaginary; // imaginaary automatically auxa from first object

        return temp;
    }
};

int main()
{

    complex a(1, 2); //* parameters will be defined as real and imaginary automatically, cause its first case
    complex b(2, 3); //* parameters will be defined as b.real and b.imaginary
    //! sum gets stored in temp.real and temp.temporary
    complex d(4, 5); //* parameters will be defined as real and imaginary automatically, cause its first case
    complex e(4, 5); //* parameters will be defined as b.real and b.imaginary

    complex c = a + b + d + e;
    // complex c = a.operator+(b);  this is that a+b actually meansss

    c.show();
}