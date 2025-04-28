class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int zeros = 0 , index = 0;
        for(int i = 0 ; i < size ; i++) {
            if(nums[i] == 0){
                zeros++;
            }
            else {
                nums[index++] = nums[i];
            }
        }
        for(int i = size - zeros ; i < size ; i++){
            nums[i] = 0;
        }
    }
};