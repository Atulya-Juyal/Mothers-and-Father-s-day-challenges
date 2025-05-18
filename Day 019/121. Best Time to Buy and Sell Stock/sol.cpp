class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int curr_min = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < curr_min) {
                curr_min = prices[i];
            } else {
                maxP = max(maxP, prices[i] - curr_min);
            }
        }
        return maxP;
    }
};