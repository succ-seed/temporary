#include <iostream>
using namespace std;

class age_checker
{
    float age;

public:
    inline string checker(float age)
    {
        return (age >= 18) ? "Candidate can vote :)" : "Candidate can't vote :( ";
    }
};

int main()
{
    float age;
    std::cout << "enter your age" << std::endl;
    std::cin >> age;

    age_checker first;
    std::cout << first.checker(age) << std::endl;
    return 0;
}
