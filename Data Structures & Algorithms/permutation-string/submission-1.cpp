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
        for (int i = 0; i < s1_f.size(); i++)  
            cout << s1_f[i] << " ";
        cout << endl;

        for (int i = 0; i < (s2.length() - s1.length() + 1); i++)
        {
            cout << "here " << s2.length() - s1.length() + 1 << endl;
            vector<int> s2_f(26);
            for (int j = i; j < s1.length() + i; j++)
            {
                s2_f[s2[j] - 'a']++;
            }
            for (int j = 0; j < s2_f.size(); j++)  
                cout << s2_f[j] << " ";
            cout << endl;

            if (s1_f == s2_f)
                return true;
        }

        return false;
    }
};
