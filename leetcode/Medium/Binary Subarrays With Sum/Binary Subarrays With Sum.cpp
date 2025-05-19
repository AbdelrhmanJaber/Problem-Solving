class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixCount;
        int prefixSum = 0, result = 0;

        prefixCount[0] = 1;

        for (int num : nums) {
            prefixSum += num;
            
            if (prefixCount.find(prefixSum - goal) != prefixCount.end()) {
                result += prefixCount[prefixSum - goal];
            }

            prefixCount[prefixSum]++;
        }

        return result;
    }
};
