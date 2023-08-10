# 两数之和
class Solution:
    def twoSum(self, nums: list, target: int) -> list:
        d = {}
        for i in range(len(nums)):
            if nums[i] in d:
                return [d[nums[i]], i]

            d[target - nums[i]] = i
