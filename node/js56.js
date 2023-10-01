function merge(nums) {
  nums.sort((a, b) => a[0] - b[0])
  let ans = [nums[0]]
  const len = nums.length
  for (let i = 1; i < len; i++) {
    let temp = ans[ans.length - 1]
    if (nums[i][0] <= temp[1]) {
      if (nums[i][1] > temp[1]) temp[1] = nums[i][1]
    } else {
      ans.push(nums[i])
    }
  }
  return ans
}
