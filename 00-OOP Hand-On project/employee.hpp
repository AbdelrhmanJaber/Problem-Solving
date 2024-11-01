#include<string>
#include<iostream>
using namespace std;

class employee
{
protected:
    string firstName;
    string secondName;
    int id;
    float salary;
public:
    employee(string userFirstName , string userSecondName , int userId , float userSalary);
    ~employee();
    virtual float getTotalSalary() = 0 ;
    virtual void print_employee_basic_data();
};

