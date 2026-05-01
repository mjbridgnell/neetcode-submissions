class Solution {
public:
    bool isValid(string s) {
        vector<char> c_stack;
        if ((s.length() % 2) != 0) return false;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (c_stack.empty()) return false;
                switch (s[i])
                {
                    case ')':
                        if (c_stack.back() != '(') return false;
                        c_stack.pop_back();
                        break;
                    case '}':
                        if (c_stack.back() != '{') return false;
                        c_stack.pop_back();
                        break;
                    case ']':
                        if (c_stack.back() != '[') return false;
                        c_stack.pop_back();
                        break;
                    default:
                        break;
                }
            }
            else
            {
                c_stack.push_back(s[i]);
            }
        }
        if (!c_stack.empty()) return false;
        return true;
    }
};
