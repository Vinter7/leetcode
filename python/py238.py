class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        output = [1] * n  # 初始化输出数组

        # 计算左侧积
        left_product = 1
        for i in range(n):
            output[i] = left_product
            left_product *= nums[i]

        # 计算右侧积并更新输出数组
        right_product = 1
        for i in range(n - 1, -1, -1):
            output[i] *= right_product
            right_product *= nums[i]

        return output
