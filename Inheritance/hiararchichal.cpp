#include <iostream>

class mammals
{
public:
    void display()
    {
        std::cout << "HIII IM MAMMAL" << std::endl;
    }
};

class fishes
{
public:
    void display()
    {
        std::cout << "IM FISH, I LAY EGS" << std::endl;
    }
};

class aves
{
public:
    void display()
    {
        std::cout << "IM BIRDD, I LAY EGS" << std::endl;
    }
};

class animal : public mammals, public fishes, public aves
{
};
int main()
{
}