class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = [1] * len(nums)
        xFix = 1
        for i in range(len(nums)):
            res[i] = xFix
            xFix *= nums[i]
        xFix = 1
        for i in range(len(nums) - 1, -1, -1):
            res[i] *= xFix
            xFix *= nums[i]
        return res
