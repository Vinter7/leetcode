class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)

        # 将所有负数和大于 n 的数替换为 n+1
        for i in range(n):
            if nums[i] <= 0 or nums[i] > n:
                nums[i] = n + 1

        # 使用索引作为哈希键，标记出现过的数
        for i in range(n):
            num = abs(nums[i])
            if num <= n:
                nums[num - 1] = -abs(nums[num - 1])

        # 找到第一个正数的索引，即为缺失的最小正整数
        for i in range(n):
            if nums[i] > 0:
                return i + 1

        return n + 1
