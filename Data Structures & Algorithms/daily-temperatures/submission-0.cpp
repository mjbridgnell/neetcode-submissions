class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(static_cast<int>(temperatures.size()));
        stack<int> my_stack;
        
        for (size_t i = 0; i < temperatures.size(); i++)
        {
            bool bla = true;
            while (!my_stack.empty() && bla)
            {
                if (temperatures[i] > temperatures[my_stack.top()])
                {
                    result[my_stack.top()] = (static_cast<int>(i) - my_stack.top());
                    my_stack.pop();
                }
                else
                {
                    bla = false;
                }
            }
            my_stack.push(static_cast<int>(i));
        }

        return result;
    }
};
