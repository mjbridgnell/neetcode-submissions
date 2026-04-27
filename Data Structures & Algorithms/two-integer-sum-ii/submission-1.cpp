class Solution {
public:
    vector<int> buildResult(int x, int y)
    {
        vector<int> r;
        if (x < y)
        {
            r.push_back(x + 1);
            r.push_back(y + 1);
            return r;
        }
        r.push_back(y + 1);
        r.push_back(x + 1);
        return r;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> counter;
        vector<int> result;
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j)
        {
            int i_cur = numbers[i];
            int j_cur = numbers[j];
            if (counter.contains(target - i_cur))
            { 
                return buildResult(i, counter[target - i_cur]);
            }
            if (counter.contains(target - j_cur))
            {
                return buildResult(j, counter[target - j_cur]);
            }
            if ((i_cur + j_cur) == target)
            {
                result.push_back(i + 1);
                result.push_back(j + 1);
                return result;
            }
            counter[i_cur] = i;
            counter[j_cur] = j;
            i++;
            j--;
        }
    }
};
