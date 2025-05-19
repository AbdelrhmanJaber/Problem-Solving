class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_map<int,int> firstIndex;
        unordered_map<int,int> lastIndex;
        int degree = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            int num = nums[i];
            if(firstIndex.find(num) == firstIndex.end()) {
                firstIndex[num] = i ; 
            }
            lastIndex[num] = i;
            freq[num]++;
            degree = max(degree , freq[num]);
        }
        int minLength = nums.size();
        for(auto&[num,count] : freq) {
            if(count == degree) {
                minLength = min(minLength , lastIndex[num] - firstIndex[num] + 1);
            }
        }
        return minLength;
    }
};
