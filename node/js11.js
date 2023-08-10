// 盛最多水的容器
function maxArea(nums) {
  let i = 0,
    j = nums.length - 1,
    ans = 0
  while (i < j) {
    let area = Math.min(nums[i], nums[j]) * (j - i)
    area > ans && (ans = area)
    nums[i] > nums[j] ? j-- : i++
  }
  return ans
}
