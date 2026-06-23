class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int l = 0;
        int r = 0;
        while (r < prices.size()) {
            if (prices[r] > prices[l]) {
                if (prices[r] - prices[l] > max) {
                    max = prices[r] - prices[l];
                }
                r++;
            } else {
                l = r;
                r++;
            }
        } 
        return max;
    }
};
