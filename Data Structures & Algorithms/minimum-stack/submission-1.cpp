class MinStack {
    vector<int> m_stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        m_stack.push_back(val);
    }
    
    void pop() {
        m_stack.pop_back();
    }
    
    int top() {
        return m_stack.back();
    }
    
    int getMin() {
        int m {2147483647};
        for (int i = 0; i < m_stack.size(); i++)
        {
            if (m_stack[i] < m)
                m = m_stack[i];
        }
        return m;
    }
};
