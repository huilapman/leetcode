class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_v = prices[0];
        int n = prices.size();
        int total = 0;
        for (int i = 1; i < n; ++i) {
            if (min_v > prices[i]) {
                if (i > 1) {
                    total += prices[i-1] - min_v; 
                }
                min_v = prices[i];
            }
            else{
                if (prices[i] < prices[i-1]) {
                    total += prices[i-1] - min_v; 
                    min_v = prices[i];
                }
                else {
                    if (i == n-1) {
                        total += prices[i] - min_v; 
                    }
                }
            }
        }

        return total;
    }
};
