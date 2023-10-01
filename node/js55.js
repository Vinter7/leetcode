function canJump(nums) {
  const len = nums.length
  let step = 0
  for (let i = 0; i <= step; i++) {
    if (nums[i] + i > step) step = nums[i] + i
    if (step >= len - 1) return true
  }
  return false
}
