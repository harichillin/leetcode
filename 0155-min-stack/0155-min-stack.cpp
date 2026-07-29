class MinStack {
public:
    vector<int>main;
    vector<int>small;
    MinStack() {
        
        
    }
    
    void push(int value) {
        main.push_back(value);
        if(small.empty())
        {
            small.push_back(value);
        }
        else
        {
            small.push_back(min(small.back(),value));
        }
        
        
    }
    
    void pop() {
        
            main.pop_back();
            small.pop_back();
        
        
        
    }
    
    int top() {
        return main.back();
        
    }
    
    int getMin() {
        return small.back();
        
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */