#include"employee.hpp"

class engineer : public employee
{
private:
    /* data */
    string position;
    int experience;
    float overTime;
    float extraHours;
public:     
    engineer(string userFirstName , string userSecondName , int userID , float userSalary , string pos , 
        int userExperience);
    ~engineer();
    float getTotalSalary();
    void print_employee_basic_data();
    void setOverTime(float userOverTime);
    float getOverTime();
    void setExtraHours(float extra_hours);
    float getExtraHours();
};

