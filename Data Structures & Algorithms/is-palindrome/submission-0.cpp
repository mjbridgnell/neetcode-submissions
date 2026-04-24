class Solution {
public:
    bool isPalindrome(string s) {
        string parsed = "";
        for (auto c : s)
        {
            if (isdigit(c) || isalpha(c))
            {
                c = tolower(c);
                parsed += c;
            }
        }
        int i = 0;
        int j = parsed.length() - 1;
        while (i < j)
        {
            if (parsed[i] != parsed[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
