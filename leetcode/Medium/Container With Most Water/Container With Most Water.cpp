class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0 , last = height.size() - 1;
        int localMax = 0 , res = 0;
        for(int i = 0 ; i < height.size() ; i++) {
            localMax = (last - first) * min(height[first] , height[last]);
            res = max(res,localMax);
            if(height[first] < height[last]) first++;
            else last--;
        }
        return res;
    }
};