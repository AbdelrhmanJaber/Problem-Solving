class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n =  nums.size();
        int evenIndex = 0 , oddIndex = 1;
        vector<int> res(n,0);
        for(int num : nums){
            if( num %2 == 0) {
                res[evenIndex] = num;
                evenIndex+=2; 
            } else {
                res[oddIndex] = num;
                oddIndex+=2; 
            }
        }
        return res;
    }
};