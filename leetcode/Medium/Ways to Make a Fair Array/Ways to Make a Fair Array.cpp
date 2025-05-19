class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
       int n = nums.size();
       vector<int> prefixEven(n+1,0) , prefixOdd(n+1,0);
       for(int i = 0 ; i < n ; i++) {
            prefixEven[i+1] = prefixEven[i];
            prefixOdd[i+1] = prefixOdd[i];
            if(i%2 == 0) {
                prefixEven[i+1] += nums[i];
            } else {
                prefixOdd[i+1] += nums[i];
            }
       }
        int count = 0;
        for(int i = 0 ; i < n ; i++) {
            int evenBefore = prefixEven[i];
            int oddBefore = prefixOdd[i];
            int evenAfter = prefixOdd[n] - prefixOdd[i+1];
            int oddAfter = prefixEven[n] - prefixEven[i+1];
            if((evenBefore + evenAfter) == (oddBefore + oddAfter)) count++;
        }
        return count;
    }
};