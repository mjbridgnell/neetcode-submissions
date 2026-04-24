class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> count;
        for (int num : nums)
        {
            count[num]++;
        }
        int cur = 1;
        int max = 0;
        
        for (auto const& [key, val] : count)
        {
            if (!count.contains(key - 1))
            {
                int it = key;
                while(count.contains(it + 1))
                {
                    cur++;
                    it++;
                }
                if (cur > max)
                    max = cur;
                cur = 1;
            }
        }

        return max;
    }
};
