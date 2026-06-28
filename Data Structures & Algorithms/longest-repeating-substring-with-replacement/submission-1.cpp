class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s == "") {
            return 0;
        }
        std::unordered_map<char, int> window;
        int l = 0;
        int r = 0;
        int max = 0;
        while (r < s.length()) {
            window[s[r]]++;
            while (!is_valid(window, k)) {
                window[s[l]]--;
                l++;
            }
            if (r - l + 1 > max) {
                max = r - l + 1;
            }
            r++;
        }
        return max;
    }
    bool is_valid(std::unordered_map<char, int> window, int k) {
        int max = 0;
        int total = 0;
        for (const auto& [c, value] : window) {
            if (value > max) {
                max = value;
            }
            total += value;
        }
        return (total - max <= k);
    }
};
