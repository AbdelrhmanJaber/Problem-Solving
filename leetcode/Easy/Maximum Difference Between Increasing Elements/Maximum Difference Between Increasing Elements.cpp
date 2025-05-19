
class Solution
{
private:
    int getMax(int min, int diff)
    {
        return (min > diff) ? min : diff;
    }
    int getMin(int min, int diff)
    {
        return (min > diff) ? diff : min;
    }

public:
    int maximumDifference(vector<int> &nums)
    {
        int temp = nums[0];
        int maxDiff = 0;
        int result = -1;
        int size = nums.size();
        for(int i = 1 ; i < size   ; i++) {
            if(nums[i] > temp){
                maxDiff = nums[i] - temp;
                result = getMax(result , maxDiff);
            }
            temp = getMin(temp , nums[i]);
        }
        return result;
    }
};
