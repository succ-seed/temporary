//! basic to class conversion garna USING parameterized CONSTRUCTOR is mandatory

#include <iostream>

class conversionToClass
{
    int n;

public:
    conversionToClass(int x)
    {
        n = x;
    }

    void display()
    {
        std::cout << n << std::endl;
    }
};

int main()
{

    conversionToClass first = 13;

    // conversionToClass first(13);

    first.display();

    return 0;
}

// #include <iostream>

// class conversionToClass
// {
//     int n;

// public:
//     conversionToClass(int x)
//     {
//         n = x;
//     }

//     void display()
//     {
//         std::cout << n << std::endl;
//     }
// };

// int main()
// {

//     conversionToClass first = 13;
//     first.display();

//     return 0;
// }
