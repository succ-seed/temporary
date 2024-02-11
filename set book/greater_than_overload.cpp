#include <iostream>
// using namespace std;

class distance
{

private:
    double dist;

public:
    distance()
    {
        dist = 0;
    }

    distance(double a)
    {
        dist = a;
    }

    distance operator<(distance a)
    {
        if (dist > a.dist)
        {
            return dist;
        }
        else if (dist < a.dist)
        {
            return a.dist;
        }
        else
        {
            return 0;
        }
    }

    void display()
    {
        if (dist == 0)
        {
            std::cout << "The distances are equal" << std::endl;
        }
        else
        {
            std::cout << dist << "is the greater" << std::endl;
        }
    }
};

int main()
{
    distance inst1(6.69);
    distance inst2(6.69);

    // distance inst3 = inst1.operator<(inst2);
    distance inst3 = inst1.operator<(inst2);

    inst3.display();
}