class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int i = 0;
        int j = heights.size() - 1;
        while (i < j)
        {
            int area = 0;
            if (heights[i] >= heights[j])
            {
                area = heights[j] * (j - i);
                j--;
            }
            else
            {
                area = heights[i] * (j - i);
                i++;
            }
            if (area > max) max = area;
        }
        return max;
    }
};
