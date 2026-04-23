class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> scount;
        unordered_map<char, int> tcount;
        if (s.length() != t.length())
            return false;
        for (int i = 0; i < s.length(); i++)
        {
            scount[s[i]]++;
            tcount[t[i]]++;
        }
        for (auto& [key, val] : scount)
        {
            if (scount[key] != tcount[key])
                return false;
        }
        return true;
    }
};
