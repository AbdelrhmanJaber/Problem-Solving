#include <iostream>
using namespace std;

int devideBy8(int num){
    int res;
    (num %8 == 0)?res = 1:res=0;
    return res;
}


int devideBy3And4(int num){
    int res;
    (num %3 == 0 && num%4 == 0)?res = 1:res=0;
    return res;
}

int main(){
    int num;
    cin>>num;
    for(int i = 0 ; i < num ; i++){
        if(devideBy8(i) || devideBy3And4(i)) cout<<i<<" ";
    }
    return 0;
}