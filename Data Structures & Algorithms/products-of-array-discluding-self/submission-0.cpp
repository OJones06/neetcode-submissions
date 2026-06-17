class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int xFix = 1;
        for (int i = 0; i < nums.size(); i++) {
            result[i] = xFix;
            xFix *= nums[i];
        }
        xFix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= xFix;
            xFix *= nums[i];
        }
        return result;
    }
};
