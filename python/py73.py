class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """

        m, n = len(matrix), len(matrix[0])
        # 用集合记录所有包含 0 的行号和列号
        zero_rows = {i for i in range(m) for j in range(n) if matrix[i][j] == 0}
        zero_cols = {j for j in range(n) for i in range(m) if matrix[i][j] == 0}

        # 遍历矩阵，如果当前行或列在集合中，则置为 0
        for i in range(m):
            for j in range(n):
                if i in zero_rows or j in zero_cols:
                    matrix[i][j] = 0
