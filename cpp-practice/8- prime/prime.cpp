#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num , flag = 0;
    cin>>num;
    for(int i = 2 ; i < num ; i++)
        if(num%i == 0) 
            flag = 1;
    if(flag || num == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}