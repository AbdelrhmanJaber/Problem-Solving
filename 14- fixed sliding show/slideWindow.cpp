#include<iostream>
using namespace std;

int main(){
    int k , n , min_pos , max_interval;
    cin>>k>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    max_interval = arr[0];
    for(int i = k-1 ; i < n ; i++){
        if(max_interval < arr[i]){
            max_interval = arr[i];
            min_pos = i-2;
        } 
    }
    cout<<min_pos<<" "<< min_pos+2 <<" "<<max_interval;
    return 0;
}