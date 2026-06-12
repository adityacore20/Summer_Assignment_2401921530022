class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0;
        int maxLen = 1;
        
        for (int i = 0; i < s.length(); i++) {
            int left1 = i;
            int right1 = i;
            while (left1 >= 0 && right1 < s.length() && s[left1] == s[right1]) {
                left1--;
                right1++;
            }
            int len1 = right1 - left1 - 1;
            
            int left2 = i;
            int right2 = i + 1;
            while (left2 >= 0 && right2 < s.length() && s[left2] == s[right2]) {
                left2--;
                right2++;
            }
            int len2 = right2 - left2 - 1;
            
            int len = max(len1, len2);
            if (len > maxLen) {
                maxLen = len;
                start = i - (len - 1) / 2;
            }
        }
        
        return s.substr(start, maxLen);
    }
};
