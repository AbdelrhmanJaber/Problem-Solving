#include<iostream>
using namespace std;

int main(){
    int num , val , count = 0;
    cin>>num;
    int temp = num;
    int sum = 0 , tripleSum = 0;
    int power ;
    while(temp != 0){
        count++;
        temp/=10;
    }
    while(num != 0){
        val = num%10;
        power = 1;
        for(int i = 0 ; i < count -1 ; i++){
            power*=10;
        }
        sum+= val * power;
        tripleSum+=(val * power *3);
        count--;
        num = num/10;
    }
    cout<<sum<<" "<<tripleSum<<endl;
}