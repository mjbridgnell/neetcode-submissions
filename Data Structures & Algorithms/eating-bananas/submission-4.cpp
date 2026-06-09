class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        int mid = 1;
        
        while (high >= low)
        {
            mid = ((high - low) / 2) + low;
            int hours = 0;
            for (int n : piles)
            {
                hours += ceil(static_cast<double>(n) / mid);
            }

            if (hours > h)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return low;
    }
};
