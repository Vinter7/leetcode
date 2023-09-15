// 在排序数组中查找元素的第一个和最后一个位置
const searchRange = (nums, t) => {
  let left = 0
  let right = nums.length - 1
  while (left <= right) {
    const mid = parseInt((left + right) / 2)
    if (nums[mid] < t) left = mid + 1
    else right = mid - 1
  }
  if (nums[left] != t) return [-1, -1]
  let lft = left
  for (;;) if (nums[++lft] != t) break
  return [left, lft - 1]
}
