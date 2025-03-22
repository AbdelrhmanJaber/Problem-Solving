class Solution {
public:
int getMax(int a , int b) {
    int result = a>b?a:b;
    return result;
}

int getMin(int a , int b){
    int result = a<b?a:b;
    return result;
}
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0 , minSum = 0 , currentMax = 0 , currentMin = 0;
        for(int i = 0 ; i < nums.size() ; i++){
           currentMax = getMax(nums[i] , nums[i] + currentMax);
           maxSum = getMax(maxSum , currentMax);
           currentMin = getMin(nums[i] , nums[i] + currentMin);
           minSum = getMin(minSum , currentMin);

        }
        return getMax(maxSum,abs(minSum));
    }
};