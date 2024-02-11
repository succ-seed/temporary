#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void getdata()
    {
        std::cout << "Roll Number -> ";
        cin >> roll;
    }

    void showdata()
    {
        std::cout << "Roll Number -" << roll << std::endl;
    }
};

class test : public student
{
protected:
    float math;
    float english;

public:
    void getdata()
    {
        student::getdata();

        std::cout << "Math's mark ->" << std::endl;
        cin >> math;

        std::cout << "Math's mark ->" << std::endl;
        cin >> english;
    }

    void showdata()
    {
        student::showdata();

        std::cout << "Math's Mark -" << math << std::endl;
        std::cout << "English's Mark -" << english << std::endl;
    }
};

class sports
{
protected:
    float score;

public:
    void getdata()
    {
        std::cout << "Score -> ";
        cin >> score;
    }

    void showdata()
    {
        std::cout << "Score -" << score << std::endl;
    }
};

class result : public test, public sports
{
protected:
    float total;

public:
    void getdata()
    {
        student::getdata();
        test::getdata();
        sports::getdata();

        total = math + english + score;
    }

    void showdata()
    {
        student::showdata();
        test::showdata();
        sports::showdata();
        std::cout << "Score ->" << score << std::endl;
    }
};

int main()
{
    result inst1;

    inst1.getdata();
    inst1.showdata();
}