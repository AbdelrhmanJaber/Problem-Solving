class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        int count = 0 , res = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i++) {
            if(nums[i+1] == nums[i] +1) count++;
            else count = 0;
            res = res > count ? res : count;
        }
        return res + 1;
    }
};