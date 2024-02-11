#include <iostream>

using namespace std;

template <class T>

class complex
{
    T a;
    T b;

public:
    void setData(T x, T y)
    {
        a = x;
        b = y;
    }

    void sumComplex(
        complex<int> o1, complex<int> o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void displaySum()
    {
        std::cout << "sum of given complex number = " << a << " + " << b << "i \n";
    }
};

int main()
{
    complex<int> c1, c2, cSUM;

    c1.setData(1, 2);
    c2.setData(1, 2);

    cSUM.sumComplex(c1, c2);
    cSUM.displaySum();

    return 0;
}
