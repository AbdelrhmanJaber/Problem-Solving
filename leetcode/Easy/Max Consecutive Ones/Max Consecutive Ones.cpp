class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.empty()) return 0;

        int counter = 0, maxOnes = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                counter++;
                if (counter > maxOnes)
                    maxOnes = counter;
            } else {
                counter = 0;
            }
        }

        return maxOnes;
    }
};