class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0 , ones = 0 , twos = 0 , index = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 0) zeros++;
            else if(nums[i] == 1) ones++;
            else if (nums[i] == 2) twos++;
        }
        for(index; index < zeros ; index++){
            nums[index] = 0;
        }
        for(index = 0; index < ones ; index++){
            nums[index + zeros] = 1;
        }
        for(index = 0; index < twos ; index++){
            nums[index + zeros + ones] = 2;
        }
    }
};