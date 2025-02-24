#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int counts = 0;
        for (int start = 0; start < (int)nums.size(); start++)
        {
            int temp = 0;
            for (int end = start; end < (int)nums.size(); end++)
            {
                temp += nums[end];
                if (temp == k)
                {
                    counts++;
                }
            }
        }
        return counts;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    Solution s1;
    cout << s1.subarraySum(nums, 3) << endl;
    return 0;
}