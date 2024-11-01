#include"engineer.hpp"

engineer::engineer(string userFirstName , string userSecondName , int userID , float userSalary , string pos , 
        int userExperience):employee(userFirstName ,userSecondName ,userID ,userSalary){
        this->experience = userExperience;
        this->position = pos;
        
}

engineer::~engineer(){

}

float engineer::getTotalSalary(){
    this->salary = this->salary + (this->overTime * this->extraHours);
    return this->salary;
}

void engineer::print_employee_basic_data(){
    employee::print_employee_basic_data();
    cout<<"\nPosition : "<<this->position;
    cout<<"\nExperience : "<<this->experience<<" years";
    cout<<"\nTotal salary : "<<this->salary;
}

void engineer::setOverTime(float userOverTime){
    this->overTime = userOverTime;
}

float engineer::getOverTime(){
    return this->overTime;
}

void engineer::setExtraHours(float extra_hours){
    this->extraHours = extra_hours;
}

float engineer::getExtraHours(){
    this->extraHours;
}