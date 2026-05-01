class MinStack {
    stack<int> m_stack;
    stack<int> e_stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(!m_stack.empty())
        {
            int cur = e_stack.top();
            e_stack.push(min(cur, val));
        }
        else
        {
            e_stack.push(val);
        }
        m_stack.push(val);
    }
    
    void pop() {
        m_stack.pop();
        e_stack.pop();
    }
    
    int top() {
        return m_stack.top();
    }
    
    int getMin() {
        return e_stack.top();
    }
};
