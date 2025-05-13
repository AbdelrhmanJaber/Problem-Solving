class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int postfixHelper = 1 , prefixHelper = 1;
        vector <int> postfix(size) , prefix(size);
        vector<int> result;
        for(int i = 0 ; i < size ; i++) {
            prefixHelper *= nums[i];
            prefix[i] = prefixHelper;
            postfixHelper *= nums[size - 1 - i];
            postfix[size - 1 - i] =  postfixHelper;
        }
        for(int i = 0 ; i < size ; i++) {
            if(!i){
                result.push_back(postfix[i+1]);
            } else if (i == (size - 1)) {
                result.push_back(prefix[size - 2]);
            } else {
                result.push_back((prefix[i-1] * postfix[i+1]));
            }
        }
        return result;
    }
};