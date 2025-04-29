class Solution {
public:
    int maxProfit(vector<int>& prices) {
        unordered_map<int,int> mp;
        int max = 0 , min = prices[0];
        for(int i = 1 ; i < prices.size() ; i++){
            if(prices[i] > min){
                max = max>(prices[i] - min)?max:(prices[i] - min);
            }
            else{
                min = prices[i];
            }
        }
        return max;
    }
};