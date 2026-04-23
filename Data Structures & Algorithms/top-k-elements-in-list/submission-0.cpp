class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> count;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        for (int i = 0; i < k; i++)
        {
            int max = 0;
            int k = 0;
            for (auto const& [key, val] : count)
            {
                if (val > max)
                {
                    max = val;
                    k = key;
                }
            }
            result.push_back(k);
            count.erase(k);
        }
        return result;
    }
};
