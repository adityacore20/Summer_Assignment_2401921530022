class MinStack {
private:
    std::stack<int> mainStack;
    std::stack<int> minStack;

public:
    MinStack() {}
    
    void push(int value) {
        mainStack.push(value);
        if (minStack.empty()) {
            minStack.push(value);
        } else {
            minStack.push(std::min(value, minStack.top()));
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
