// wap c++ to read data of n employee and compute net salary of each employee
// DA = 52% and IT = 30% of the gross salary
// netsalary = basic+da-it

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
    double income_tax;

public:
    void get_data()
    {
        std::cout << "Enter name of employee->";
        cin >> name;

        std::cout << "Enter salary -> Rs.";
        cin >> basic_salary;

        daily_allowance = DA * basic_salary;
        income_tax = IT * basic_salary;

        net_sal = (basic_salary + (daily_allowance * 30)) - income_tax;

        std::cout << "Name -> " << name << std::endl;
        std::cout << "Net salary->" << net_sal << std::endl;

        return;
    }

    // void net_salary()
    // {
    //     // daily_allowance = DA * basic_salary;
    //     // income_tax = IT * basic_salary;

    //     // net_sal = (basic_salary * (daily_allowance * 30)) - income_tax;
    //     // return;
    // }

    // void display_info()
    // {
    //     // std::cout << "Name -> " << name << std::endl;
    //     // std::cout << "Net salary->" << net_salary << std::endl;

    //     return;
    // }
};

int main()
{

    int num_of_employee;

    std::cout << "Number of employee" << std::endl;
    std::cin >> num_of_employee;

    for (int i = 0; i < num_of_employee; i++)
    {
        salary c;
        c.get_data();
    }
}