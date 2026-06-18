class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0 && nums[i - 1] == nums[i]) {
                continue;
            }
            int target = 0 - nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                if (nums[left] + nums[right] == target) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    left += 1;
                    while (left > nums.size() && nums[left] == nums[left - 1]) {
                        left += 1;
                    }
                    right -= 1;
                    while (right > i && nums[right] == nums[right + 1]) {
                        right -= 1;
                    }
                } else if (nums[left] + nums[right] > target) {
                    right -= 1;
                } else {
                    left += 1;
                }
            }
        }
        return res;
    }
};
