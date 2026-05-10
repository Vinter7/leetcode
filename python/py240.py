class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        n = len(matrix)
        m = len(matrix[0])
        if n + m == 0:
            return False
        temp1 = []
        temp2 = []
        for i in range(n):
            if target == matrix[i][0]:
                return True
            if target > matrix[i][0]:
                temp1.append(i)
        for j in range(m):
            if target == matrix[0][j]:
                return True
            if target > matrix[0][j]:
                temp2.append(j)

        print(temp1, temp2)

        for row in temp1:
            for col in temp2:
                if matrix[row][col] == target:
                    return True
        return False


max1 = [
    [1, 4, 7, 11, 15],
    [2, 5, 8, 12, 19],
    [3, 6, 9, 16, 22],
    [10, 13, 14, 17, 24],
    [18, 21, 23, 26, 30],
]
max2 = [[-1, 3]]
print(Solution().searchMatrix(max2, 3))
