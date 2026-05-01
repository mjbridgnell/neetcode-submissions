class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int i {};
        int result {};
        for (int j = 0; j < s.length(); j++)
        {
            while(window.contains(s[j]))
            {
                window.erase(s[i]);
                i++;
            }
            window.insert(s[j]);
            result = max(result, j - i + 1);
        }
        return result;
    }
};
