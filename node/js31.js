//下一个排列
function nextPermutation(nums) {
  let i = nums.length - 2
  while (i >= 0 && nums[i] >= nums[i + 1]) i--
  if (i == -1) return nums.reverse()

  let j = nums.length - 1
  while (j >= 0 && nums[j] <= nums[i]) j--
  ;[nums[i], nums[j]] = [nums[j], nums[i]]
  j = nums.length - 1
  while (i + 1 < j) {
    ;[nums[i + 1], nums[j]] = [nums[j], nums[i + 1]]
    i++
    j--
  }
  return nums
}
// 下一个排列
console.log(nextPermutation([3, 2, 1]))
