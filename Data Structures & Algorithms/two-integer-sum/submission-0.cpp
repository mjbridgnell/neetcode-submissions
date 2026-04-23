class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> count; //num, index
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int difference = target - nums[i];
            auto it = count.find(difference);
            if (it != count.end())
            {
                result.push_back(count[difference]);
                result.push_back(i);
            }
            count[nums[i]] = i;
        }
        return result;
    }
};
