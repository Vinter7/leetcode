// 两数之和
function twoSum(nums, target) {
  let m = {}
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] in m) return [m[nums[i]], i]
    else m[target - nums[i]] = i
  }
  return []
}
