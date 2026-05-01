class Solution {
public:
    bool isValid(string s) {
        vector<char> c_stack;
        if ((s.length() % 2) != 0) return false;

        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
                case ')':
                    if (c_stack.empty()) return false;
                    else if (c_stack.back() != '(') return false;
                    c_stack.pop_back();
                    break;
                case '}':
                    if (c_stack.empty()) return false;
                    else if (c_stack.back() != '{') return false;
                    c_stack.pop_back();
                    break;
                case ']':
                    if (c_stack.empty()) return false;
                    else if (c_stack.back() != '[') return false;
                    c_stack.pop_back();
                    break;
                default:
                    c_stack.push_back(s[i]);
                    break;
            }
        }
        if (!c_stack.empty()) return false;
        return true;
    }
};
