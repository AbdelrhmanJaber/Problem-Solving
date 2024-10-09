#include<iostream>
using namespace std;

int main(){
    int test_cases_num ,test_case , temp_test_case , sum , res;
    cin>>test_cases_num;
    while (test_cases_num != 0)
    {
        cin>>test_case;
        temp_test_case = 1;
        sum = 0 ;
        while (temp_test_case <= test_case)
        {
            int val;
            cin>>val;
            int count = temp_test_case;
            res = 1;
            while(count != 0){
                res*= val;
                count--;
            }
            sum+= res;
            temp_test_case++;
        }
        cout<<sum<<" "<<endl;
        test_cases_num--;
    }
    
    return 0;
}