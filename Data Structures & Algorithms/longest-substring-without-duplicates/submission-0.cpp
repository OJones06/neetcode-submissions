class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == "") {
            return 0;
        }
        int max = 1;
        int l = 0;
        int r = 0;
        std::unordered_set<char> window;
        while (r < s.length()) {
            if (window.contains(s[r])) { // r val already in map, remove r[l], l++
                window.erase(s[l]);
                l++;
            } else {
                window.insert(s[r]);
                r++;
                if (window.size() > max) {
                    max = window.size();
                }
            }
        }
        return max;
    }
};
