#include <iostream>
using namespace std;

int max(int num1 , int num2){
    int res;
    num1 > num2 ? res = num1 : res = num2;
    return res;
}

int min(int num1 , int num2){
    int res;
    num1 < num2 ? res = num1 : res = num2;
    return res;
}


int main(){
    int firstLow , firstHigh  , secondLow  , secondHigh , interLow , interHigh;
    cin>>firstLow>>firstHigh>>secondLow>>secondHigh;
    if(firstHigh < secondLow || secondHigh < firstLow) cout<<-1;
    else{
        interLow = max(firstLow , secondLow);
        interHigh = min(firstHigh , secondHigh);
        cout<<interLow<<" "<<interHigh;
    }
    return 0;
}