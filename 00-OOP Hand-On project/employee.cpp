#include "employee.hpp"


employee::employee(string userFirstName , string userSecondName , int userId , float userSalary)
{
    this->firstName = userFirstName;
    this->secondName = userSecondName;
    this->id = userId;
    this->salary = userSalary;
    cout<<"Hello "<<this->firstName<<" "<<this->secondName<<" to the company system\n";
}

employee::~employee()
{
}

void employee::print_employee_basic_data(){
    cout<<"Name : "<<this->firstName<<" "<<this->secondName<<"\nID : "<<this->id;
}

