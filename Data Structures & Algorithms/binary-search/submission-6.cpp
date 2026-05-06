class Solution {
public:
    int search(vector<int>& nums, int target) {
        size_t high = nums.size() - 1;
        size_t mid = high / 2;
        size_t low = 0;

        while (nums[mid] != target && mid != low && mid != high)
        {
            if (target > nums[mid])
            {
                low = mid;
                mid = ((high - mid) / 2) + mid;
            }
            else
            {
                high = mid;
                mid = mid / 2;
            }
        }
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[low] == target)
        {
            return low;
        }
        else if (nums[high] == target)
        {
            return high;
        }
        return -1;
    }
};
