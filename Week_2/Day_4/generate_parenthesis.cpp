class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        backtrack(result, current, 0, 0, n);
        return result;
    }
    
private:
    void backtrack(vector<string>& result, string& current, int openCount, int closeCount, int max) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }
        
        if (openCount < max) {
            current.push_back('(');
            backtrack(result, current, openCount + 1, closeCount, max);
            current.pop_back(); 
        }
        
        if (closeCount < openCount) {
            current.push_back(')');
            backtrack(result, current, openCount, closeCount + 1, max);
            current.pop_back(); 
        }
    }
};
