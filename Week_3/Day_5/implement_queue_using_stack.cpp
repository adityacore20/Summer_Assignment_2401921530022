class MyQueue {
private:
    std::stack<int> in_stack;
    std::stack<int> out_stack;

    void flush_in_to_out() {
        if (out_stack.empty()) {
            while (!in_stack.empty()) {
                out_stack.push(in_stack.top());
                in_stack.pop();
            }
        }
    }

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        in_stack.push(x);
    }
    
    int pop() {
        flush_in_to_out();
        int front_element = out_stack.top();
        out_stack.pop();
        return front_element;
    }
    
    int peek() {
        flush_in_to_out();
        return out_stack.top();
    }
    
    bool empty() {
        return in_stack.empty() && out_stack.empty();
    }
};
