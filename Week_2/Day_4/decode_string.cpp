class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strings;
        string currentString = "";
        int k = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            } else if (c == '[') {
                counts.push(k);
                strings.push(currentString);
                currentString = "";
                k = 0;
            } else if (c == ']') {
                string temp = currentString;
                currentString = strings.top();
                strings.pop();
                
                int repeatCount = counts.top();
                counts.pop();
                
                while (repeatCount-- > 0) {
                    currentString += temp;
                }
            } else {
                currentString += c;
            }
        }
        
        return currentString;
    }
};
