class Solution {
public:

    string encode(vector<string>& strs) {
        string code;
        for (string s : strs)
        {
            code += s;
            code += "`";
        }
        return code;
    }

    vector<string> decode(string s) {
        vector<string> dcode;
        stringstream ss(s);
        string item;
        while (getline(ss, item, '`'))
        {
            dcode.push_back(item);
        }
        return dcode;
    }
};
