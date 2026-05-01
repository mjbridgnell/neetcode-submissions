class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1_f(26);

        if (s1.length() > s2.length())
            return false;

        for (int i = 0; i < s1.length(); i++)
        {
            s1_f[s1[i] - 'a']++;
        }

        for (int i = 0; i < (s2.length() - s1.length() + 1); i++)
        {
            vector<int> s2_f(26);
            for (int j = i; j < s1.length() + i; j++)
            {
                s2_f[s2[j] - 'a']++;
            }

            if (s1_f == s2_f)
                return true;
        }

        return false;
    }
};
