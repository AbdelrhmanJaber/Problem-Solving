#include<iostream>
using namespace std;

int minArray(int arr[] , int size);
int maxArray(int arr[] , int size);

int main(){
    int interval;
    int min = 0 , max = 0;
    cin>>interval;
    int arr[interval];
    for(int i = 0 ; i < interval ; i++){
        cin>>arr[i];
    }
    min = minArray(arr,interval);
    max = maxArray(arr,interval);
    cout<<"min "<<min<<endl;
    cout<<"max "<<max<<endl;
    for(int i = 0 ; i < interval ; i++){
        if(arr[i] == min) arr[i] = max;
        else if(arr[i] == max) arr[i] = min;
    }
     for(int i = 0 ; i < interval ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


int minArray(int arr[] , int size){
    int min = arr[0];
    for(int i = 1 ; i < size ; i++){
        if(min > arr[i]) min = arr[i];
    }
    return min;
}

int maxArray(int arr[] , int size){
    int max = arr[0];
    for(int i = 1 ; i < size ; i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}