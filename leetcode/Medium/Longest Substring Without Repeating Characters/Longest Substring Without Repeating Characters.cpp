class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>visited;
        int result = 0;
        for(int start = 0 , end = 0 ; end < s.size() ; end++) {
            if(visited.count(s[end])) {
                start = visited[s[end]]+1 > start ? visited[s[end]]+1 : start;
            }
            result = (end - start + 1) > result ? (end - start + 1) : result;
            visited[s[end]] = end;
        }
        return result;
    }
};