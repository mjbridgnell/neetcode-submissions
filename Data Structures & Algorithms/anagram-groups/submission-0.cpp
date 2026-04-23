class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> hash; 
        vector<vector<string>> result;

        for (string x : strs)
        {
            vector<int> count(26);
            for (char c : x)
            {
                int y = static_cast<int>(c);
                count[y - 97]++;
            }
            vector<string> temp = hash[count];
            temp.push_back(x);
            hash[count] = temp;
        }

        for (auto const& [key, val] : hash)
        {
            result.push_back(val);
        }
        return result;
    }
};
