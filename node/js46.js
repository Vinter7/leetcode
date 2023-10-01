// 全排列
function permute(nums) {
  if (nums.length === 1) return [nums]
  if (nums.length === 2)
    return [
      [nums[0], nums[1]],
      [nums[1], nums[0]],
    ]
  let ans = []
  for (const i of permute(nums.slice(1))) {
    for (let j = 0; j < i.length + 1; j++) {
      let temp = [...i]
      temp.splice(j, 0, nums[0])
      ans.push(temp)
    }
  }
  return ans
}
