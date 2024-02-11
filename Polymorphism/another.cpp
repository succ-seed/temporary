#include <iostream>

#define DA 0.52
#define IT 0.3

using namespace std;

class salary
{
public:
    string name;
    double basic_salary;
    double net_sal;
    double daily_allowance;
    double gross_salary;

    double income_tax;

public:
    void get_data()
    {
        std::cout << "Enter name of employee->";
        cin >> name;

        std::cout << "Enter salary -> Rs.";
        cin >> basic_salary;

        return;
    }

    void net_salary()
    {
        daily_allowance = DA * basic_salary;
        gross_salary = basic_salary + daily_allowance;
        income_tax = gross_salary * IT;

        net_sal = gross_salary - income_tax;
        return;
    }

    void display_info()
    {

        get_data();
        net_salary();

        std::cout << "Name -> " << name << std::endl;
        std::cout << "Net salary->" << net_sal << std::endl;

        return;
    }
};

int main()
{

    int num_of_employee;

    std::cout << "Number of employee" << std::endl;
    std::cin >> num_of_employee;

    for (int i = 0; i < num_of_employee; i++)
    {
        salary c;
        c.display_info();
    }
}