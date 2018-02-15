class MinStack {
    
    stack<int> s;
    stack<int> min_value;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        if(min_value.empty()){
            min_value.push(x);
        }else{
            min_value.push(min(min_value.top(), x));
        }
    }
    
    void pop() {
        s.pop();
        min_value.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min_value.top();
    }
};
