#include<iostream>
using namespace std;

int count[771];
int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i = 0 ; i < size ; i++){
        cin>>array[i];
        count[array[i]+500]++;
    }
    int temp = 0;
    for(int i = 1 ; i < 771 ; i++){
        if(count[temp] < count[i]) temp = i;
    }
    cout<<temp-500<<" repeated "<<count[temp]<<" times, the largest"<<endl;
    return 0;
}