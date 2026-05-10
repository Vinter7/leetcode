from collections import defaultdict


class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """

        prefix_count = defaultdict(int)
        prefix_count[0] = 1

        count = current_sum = 0

        for num in nums:
            current_sum += num  # 更新当前前缀和
            count += prefix_count[current_sum - k]
            prefix_count[current_sum] += 1  # 记录当前前缀和

        return count
