#include <iostream>
using namespace std;

int main()
{
    int arr[6];

    for (int i = 0; i < 6; i++)
    {
        std::cout << "Enter element-" << i + 1 << " =";

        cin >> arr[i];
    }

    // using pointers
    int *ptr = arr;

    for (int i = 0; i < 6; i++)
    {
        std::cout << *(ptr + i) << std::endl;
    }
}