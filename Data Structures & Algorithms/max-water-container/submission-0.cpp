class Solution {
public:
    int maxArea(vector<int>& heights) {
        int r = heights.size() - 1;
        int l = 0;
        int max = 0;
        while (l < r) {
            int cur = min(heights[l], heights[r]) * (r - l); 
            if (cur > max) {
                max = cur;
            }
            if (heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }
        return max;
    }
};
