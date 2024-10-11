#include<iostream>
using namespace std;

int main(){
    int size1 , size2;
    cin>>size1;
    int arr[size1];
    for(int i = 0 ; i < size1 ; i++){
        cin>>arr[i];
    }
    cin>>size2;
    int search[size2];
    int res[size2];
    for(int i = 0 ; i < size2 ; i++){
        cin>>search[i];
        res[i] = -1;
    }
    for(int i = 0 ; i < size2 ; i++){
        for(int j = 0 ; j < size1 ; j++ ){
            if(search[i] == arr[j]) 
                res[i] = j;
    }
    }
    for(int i = 0 ; i < size2 ; i++){
        cout<<res[i]<<endl;
    }
    return 0;
}