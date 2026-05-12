class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int num_rows = matrix.size();
        int num_cols = matrix[0].size();
        int low {};
        int high {num_rows - 1};
        int col {}; 

        while (high >= low)
        {
            int mid = ((high - low) / 2) + low;
            if (matrix[mid][0] <= target)
            {
                for (int i {}; i < num_cols; i++)
                {
                    if (matrix[mid][i] == target)
                        return true;
                }
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }   
        }

        return false;
    }
};
