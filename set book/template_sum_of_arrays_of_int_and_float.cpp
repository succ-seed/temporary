#include <iostream>
using namespace std;

template <class T>

T adder(T *ptr)
{
    T sum = 0;
    int len = sizeof(ptr);

    for (int i = 0; i < len; i++)
    {
        sum += *(ptr + i);
    }

    return sum;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float arr2[] = {1.2, 2.2, 3.2, 4.2, 5.2, 6.2, 7.2, 8.2, 9.2, 10.2};
    // string arr3[] = {"sandesh", "tiwari"};

    std::cout << "Sum of int : " << adder(arr1) << std::endl;
    std::cout << "Sum of Floats :" << adder(arr2) << std::endl;
    // std::cout << "Sum of String :" << adder(arr3) << std::endl;
}
