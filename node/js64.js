function minPathSum(nums) {
  const [m, n] = [nums.length, nums[0].length]
  for (let i = 1; i < m; i++) nums[i][0] += nums[i - 1][0]
  for (let i = 1; i < n; i++) nums[0][i] += nums[0][i - 1]
  for (let i = 1; i < m; i++) {
    for (let j = 1; j < n; j++)
      nums[i][j] +=
        nums[i - 1][j] < nums[i][j - 1] ? nums[i - 1][j] : nums[i][j - 1]
  }
  return nums[m - 1][n - 1]
}
