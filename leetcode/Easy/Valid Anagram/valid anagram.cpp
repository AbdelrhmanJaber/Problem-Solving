class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int freq[26] = {0}; //assci - 65
        for(int i = 0 ; i < s.size() ; i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int ch:freq){
            if(ch != 0) return false;
    }
        return true;
    }
};