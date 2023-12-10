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

    complex operator+(complex c)
    {
        // creating temporary instance of class inside of same class nai
        complex temp;
        //* temp can now have access to variables real and imaginary thats in private scope
        //*  this method will pull first value automatically, cant pass two object
        //? that is real and imaginary will be passed here from first object
        // for friend function, we have to do : friend complex operator+(complex b, complex d)

        temp.real = real + c.real;                // real automatically aauxa from first object
        temp.imaginary = imaginary + c.imaginary; // imaginaary automatically auxa from first object

        return temp;
    }
};

int main()
{
}