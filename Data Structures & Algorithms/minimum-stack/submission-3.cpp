class MinStack {
    stack<int> m_stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        m_stack.push(val);
    }
    
    void pop() {
        m_stack.pop();
    }
    
    int top() {
        return m_stack.top();
    }
    
    int getMin() {
        int m {2147483647};
        stack<int> temp_stack = m_stack;
        while(!temp_stack.empty())
        {
            if (temp_stack.top() < m)
            {
                m = temp_stack.top();
            }
            temp_stack.pop();
        }
        return m;
    }
};
