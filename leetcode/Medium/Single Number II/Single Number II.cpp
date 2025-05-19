class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        long int totalSum = 0 , duplicateSum = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            totalSum+= nums[i];
            if (mp.find(nums[i]) != mp.end()) {
                if(mp[nums[i]] == 1) 
                 duplicateSum += nums[i];
                 duplicateSum += nums[i];
            }
            mp[nums[i]]++;
        }
        return totalSum - duplicateSum;
    }
};