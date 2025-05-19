class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,char>mps;
        unordered_map<char,char>mpt;
        for(int i = 0 ; i < s.size() ; i++) {
            char cs = s[i];
            char ct = t[i];
            if(mps.count(cs)){
                if(mps[cs] != ct) return false;
            } else {
                mps[cs] = ct;
            }

            if(mpt.count(ct)){
                if(mpt[ct] != cs) return false;
            } else {
                mpt[ct] = cs;
            }
        }
        return true;
    }
};