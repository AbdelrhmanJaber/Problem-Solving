#include "engineer.hpp" 

int main() {
    employee* emp_ptr;
    engineer e1("Abdelrahman", "Ibrahim", 100, 150000, "Embedded software engineer", 3);
    e1.setExtraHours(10);
    e1.setOverTime(2000);
    emp_ptr = &e1; 
    emp_ptr->getTotalSalary();
    emp_ptr->print_employee_basic_data(); 
    return 0;
}
