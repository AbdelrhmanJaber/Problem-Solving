#include <iostream>
using namespace std;
#include <vector>

class Solution
{
private:
    int getMax(int min, int diff)
    {
        return (min > diff) ? min : diff;
    }

public:
    int maximumDifference(vector<int> &nums)
    {
        int maxDiff = -1;
        int maxNum = nums.back();
        for (int i = (int)nums.size() - 2; i >= 0; i--)
        {
            if (maxNum < nums[i])
                maxNum = nums[i];
            else
            {
                maxDiff = getMax(maxDiff, maxNum - nums[i]);
                if (maxDiff == 0)
                    maxDiff = -1;
            }
        }
        return maxDiff;
    }
};

int main(void)
{
    Solution s1;
    vector<int> nums = {999, 997, 980, 976, 948, 940, 938, 928, 924, 917, 907, 907, 881, 878, 864, 862, 859, 857, 848, 840, 824, 824, 824, 805, 802, 798, 788, 777, 775, 766, 755, 748, 735, 732, 727, 705, 700, 697, 693, 679, 676, 644, 634, 624, 599, 596, 588, 583, 562, 558, 553, 539, 537, 536, 509, 491, 485, 483, 454, 449, 438, 425, 403, 368, 345, 327, 287, 285, 270, 263, 255, 248, 235, 234, 224, 221, 201, 189, 187, 183, 179, 168, 155, 153, 150, 144, 107, 102, 102, 87, 80, 57, 55, 49, 48, 45, 26, 26, 23, 15};
    cout << s1.maximumDifference(nums) << endl;
}