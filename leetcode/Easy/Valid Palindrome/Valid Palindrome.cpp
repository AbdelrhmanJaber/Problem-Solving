class Solution {
public:
    bool isPalindrome(string s) {
         s.erase(remove_if(s.begin() , s.end() , [](char c) {
            return !isalnum(static_cast<unsigned char>(c));
         }),s.end());
         transform(s.begin() , s.end() , s.begin() , [](char c) {
            return tolower(static_cast<unsigned char>(c));
         });
         int start = 0 , end = s.length() - 1;
         while(start < end) {
            if(s[start++] != s[end--]) return false;
         }
         return true;
    }
};