class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        int pre = 1;
        for (int num : nums)
        {
            prefix.push_back(pre);
            pre *= num; 
        }
        
        vector<int> suffix;
        int suf = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            suffix.insert(suffix.begin(), suf);
            suf *= nums[i];
        }
        
        vector<int> result;
        for (int i = 0; i < prefix.size(); i++)
        {
            result.push_back(prefix[i] * suffix[i]);
        }
        return result;
    }
};
