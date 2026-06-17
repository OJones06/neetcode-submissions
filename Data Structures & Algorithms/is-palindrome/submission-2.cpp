class Solution {
public:
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9');
    }

    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            while (!alphaNum(s[left])) {
                left += 1;
            }
            while (!alphaNum(s[right])) {
                right -= 1;
            }
            if (tolower(s[left]) != tolower(s[right]) && left < right) {
                return false;
            }
            left += 1;
            right -= 1;
        }
        return true;
    }
};
