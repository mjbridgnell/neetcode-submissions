class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;

        int left {};
        int max_freq {};
        int best {};

        for (int right = 0; right < s.length(); right++)
        {
            count[s[right]]++;
            max_freq = max(max_freq, count[s[right]]);

            while ((right - left + 1) - max_freq > k)
            {
                count[s[left]]--;
                left++;
            }

            best = max(best, (right - left) + 1);
        }
        return best;
    }
};
