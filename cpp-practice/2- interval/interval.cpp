#include <iostream>
using namespace std;

int main(){
    int input , num1 , num2 , num3 , num4 , num5 , num6 , counter = 0;
    cin>>input>>num1>>num2>>num3>>num4>>num5>>num6;
    if(input >= num1 && input <= num2) counter++;
    if(input >= num3 && input <= num4) counter++;
    if(input >= num5 && input <= num6) counter++;
    cout<<counter;
    return 0;
}