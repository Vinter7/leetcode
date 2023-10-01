function maxSubArray(nums) {
  let ans = Math.max(...nums)
  if (ans < 0) return ans
  ans = 0
  let max = 0
  for (const i of nums) {
    ans += i
    if (ans < 0) {
      ans = 0
      continue
    }
    if (ans > max) max = ans
  }
  return max
}
