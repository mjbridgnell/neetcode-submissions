class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> my_stack {};

        for (string& s : tokens)
        {
            bool digit = false;
            for (char c : s)
            {  
                if (isdigit(c)) digit = true;
            }
            if (digit)
            {
                my_stack.push(stoi(s));
            }
            else
            {
                int x = my_stack.top();
                my_stack.pop();
                int y = my_stack.top();
                my_stack.pop();
                cout << x << " " << y << endl;
                switch (s[0])
                {
                    case '+':
                        my_stack.push(x + y);
                        break;
                    case '-':
                        my_stack.push(y - x);
                        break;
                    case '*':
                        my_stack.push(x * y);
                        break;
                    case '/':
                        my_stack.push(y / x);
                        break;
                }
            }
        }
        return my_stack.top();
    }
};
