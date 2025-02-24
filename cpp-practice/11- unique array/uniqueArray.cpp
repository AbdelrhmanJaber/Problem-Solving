#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    int temp;
    for(int i = 0 ; i < size ; i++){
        arr[i] = -1;
    }
    for(int i = 0 ; i < size ; i++){
        cin>>temp;
        arr[temp] = temp;
    }
    for(int i = 0 ; i < size ; i++){
        if(arr[i] != -1) cout<<arr[i]<<" ";
    }
    
    return 0;
}