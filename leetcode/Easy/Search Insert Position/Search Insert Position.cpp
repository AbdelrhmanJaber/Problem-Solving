class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
          int low,mid,high;
        low = 0;
        high = nums.size() - 1;
        mid = (high + low) / 2;
        while(low <= high){
            if(target > nums[mid]){ 
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                return mid;
            }
            mid = low + (high - low) / 2;
        }
        return mid;
    }
};