class Solution(object):
    def maxSlidingWindow(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        q = []  # 存储索引，保持对应元素单调递减

        res = []

        for i, val in enumerate(nums):
            # 1. 移除队尾所有小于当前元素的索引（因为它们不可能是最大值）
            while len(q) and nums[q[-1]] < val:
                q.pop()

            # 2. 添加当前索引
            q.append(i)

            # 3. 移除队首超出窗口左边界的索引
            if q[0] <= i - k:
                q.pop(0)

            # 4. 当窗口形成后（i >= k-1），记录最大值（队首元素）
            if i >= k - 1:
                res.append(nums[q[0]])

        return res
