class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max {0};
        int min {999};
        for (int i = 0; i < prices.size(); i++)
        {
            int sum = prices[i] - min;
            if (sum > max)
            {
                max = sum;
            }
            if (prices[i] < min)
            {
                min = prices[i];
            }
        }
        return max;
    }
};
