#include<iostream>
using namespace std;

int main(){
    string temp , prefix;
    cin>>temp;
    cin>>prefix;
    if(temp[0] == prefix[0]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}