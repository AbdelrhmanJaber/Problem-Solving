#include<iostream>
using namespace std;

int checkNumber(int num){
    int sum = 0;
    while(num !=0){
        sum+=(num%10);
        num/=10;
    }
    return sum;
}

int main(){
    int interval,num1,num2 , sum = 0;
    cin>>interval>>num1>>num2;
    int temp;
    for(int i = 1 ; i <= interval ; i++){
        temp = checkNumber(i);
        if(temp >= num1 && temp <= num2){
            sum+=i;
        }       
    }
    cout<<sum;
    return 0;
}