class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        if not intervals:
            return []

        # 1. 按照起始时间排序
        intervals.sort(key=lambda x: x[0])

        merged = [intervals[0]]  # 初始化合并结果

        for current in intervals[1:]:
            last_merged = merged[-1]

            # 2. 如果当前区间与上一个合并区间重叠，更新上一个合并区间的结束时间
            if current[0] <= last_merged[1]:
                last_merged[1] = max(last_merged[1], current[1])
            else:
                merged.append(current)  # 否则，添加当前区间到结果中

        return merged
