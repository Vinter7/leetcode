function rotate(nums) {
  const len = nums.length
  //奇偶数
  if (len % 2)
    for (let i = 0; i < (len + 1) / 2; i++)
      [nums[i], nums[len - i - 1]] = [nums[len - i - 1], nums[i]]
  else
    for (let i = 0; i < len / 2; i++)
      [nums[i], nums[len - i - 1]] = [nums[len - i - 1], nums[i]]

  for (let i = 0; i < len; i++)
    for (let j = i + 1; j < len; j++)
      [nums[i][j], nums[j][i]] = [nums[j][i], nums[i][j]]

  return nums
}
