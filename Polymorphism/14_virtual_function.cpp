#include <iostream>

class base
{
public:
    // base ma virtual rakhda, aru class ko function lai nih chance dinxa ani afno hide garxa
    // when we dont keep virtual keyword, function le aru lai chance didaina, and afu lai priority dinxa

    // Both ma virtual huda, precedence = equal
    // virtual na huda, the one without virtual has higher precedence
    virtual void display()
    {
        std::cout << "This is base class" << std::endl;
    }

    void add();
};

void base::add()
{
}

class derived : public base
{
public:
    virtual void display()
    {
        std::cout << "This is derived class" << std::endl;
    }
};

int main()
{
    base *b;
    derived d;

    b = &d;
    b->display();
}
