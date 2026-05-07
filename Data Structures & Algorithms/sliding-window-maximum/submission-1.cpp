class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        for (int i = 0; i <= nums.size() - k; i++)
        {
            int ma = -10001;
            for (int j = i; j < i + k; j++)
            {
                ma = max(ma, nums[j]);
            }
            result.push_back(ma);
        }
        return result;
    }
};
