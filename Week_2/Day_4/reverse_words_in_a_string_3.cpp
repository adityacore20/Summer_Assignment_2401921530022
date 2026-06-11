class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int n = s.length();
        
        for (int right = 0; right <= n; ++right) {
            if (right == n || s[right] == ' ') {
                reverse(s.begin() + left, s.begin() + right);
                left = right + 1; 
            }
        }
        
        return s;
    }
};
