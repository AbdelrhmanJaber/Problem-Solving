class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int most_frequent = 0;
        int max_frequent = 0;
        unordered_map<int,int> mp;
        for(int num : nums) {
            mp[num]++;
            if(mp[num] > max_frequent){
                most_frequent = num;
                max_frequent = mp[num];
            }
        }
        return most_frequent;
    }
};