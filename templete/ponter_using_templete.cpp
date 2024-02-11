#include <iostream>
using namespace std;

template <class T>

int sum(T *ptr)
{
    T sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum = sum + *(ptr + i);
    }

    return sum;
}

int main()
{
    int arr[6];

    for (int i = 0; i < 6; i++)
    {
        std::cout << "Enter element-" << i + 1 << " =";

        cin >> arr[i];
    }

    int total_sum = sum(arr);

    std::cout << "Sum of the array is =" << total_sum << std::endl;
}