class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell = -1, maxProfit = 0, n = prices.size();
        
        for (int i = 1; i < n; i++) {
            if (prices[i] < buy) {
                buy = prices[i];
                sell = -1;
            }
            else if (prices[i] > buy) {
                sell = prices[i];
                maxProfit = max(maxProfit, sell - buy);
            }
        }
        return maxProfit;
    }
};
