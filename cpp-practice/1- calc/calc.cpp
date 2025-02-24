#include <iostream>
using namespace std;


int main (){
    int num1 , num2 , res;
    char c;
    cout<<"Enter first number : " ;
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin>>c;
    switch (c)
    {
    case '+':
        res = num1 + num2;
        cout<<"the result of" << " " << num1 << " " << c << " " << num2 << " " << "=" << " " << res << endl;
        break;
    case '-':
        res = num1 - num2;
        cout<<"the result of" << " " << num1 << " " << c << " " << num2 << " " << "=" << " " << res << endl;
    break;
    case '*':
        res = num1 * num2;
        cout<<"the result of" << " " << num1 << " " << c << " " << num2 << " " << "=" << " " << res << endl;
    break;
    case '/':
        cout<<"the result of" << " " << num1 << " " << c << " " << num2 << " " << "=" << " " << (float) num1 / num2 << endl;
        break;
    default:
        cout<<"you Entered wrong option"<<endl;
        break;
    }
    return 0;
}