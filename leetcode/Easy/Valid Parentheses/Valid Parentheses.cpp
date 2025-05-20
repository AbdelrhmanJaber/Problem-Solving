class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(' ||
               s[i] == '[' ||
               s[i] == '{') {
                res.push(s[i]);
               } else {
                if(res.empty()) return false;
            if( (s[i] == ')' && res.top() != '(') ||
                (s[i] == ']' && res.top() != '[') ||
                (s[i] == '}' && res.top() != '{') ) {
                return false;
            }
               res.pop();
            }
        }
        return res.empty();
    }
};