class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        k = k % len(nums)  # 处理 k 大于数组长度的情况
        nums[:] = nums[-k:] + nums[:-k]  # 旋转数组
