class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(const string& str : strs) {
            string keyString = str;
            sort(keyString.begin() , keyString.end());
            mp[keyString].push_back(str);
        }
        vector<vector<string>> result;
        for(const auto& str : mp) {
            result.push_back(str.second);
        }
        return result;
    }
};