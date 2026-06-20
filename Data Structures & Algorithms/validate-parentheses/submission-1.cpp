class Solution {
public:
    bool isValid(string s) {
        stack<int> brackets;
        for (char c : s) {
            if (c == '(') { // 1
                brackets.push(1);
            } else if (c == '[') { // 2
                brackets.push(2);
            } else if (c == '{') { // 3
                brackets.push(3);
            } else if (brackets.empty()) {
                return false;
            } else if (c == ')') {
                if (brackets.top() != 1) {
                    return false;
                } else {
                    brackets.pop();
                }
            } else if (c == ']') {
                if (brackets.top() != 2) {
                    return false;
                } else {
                    brackets.pop();
                }
            } else if (brackets.top() != 3) {
                return false;
            } else {
                brackets.pop();
            }
        }
        if (brackets.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
