const func = (nums, t) => {
  let ans = []
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] < t) {
      let temp = func(nums.slice(i), t - nums[i])
      if (temp.length) {
        for (const j of temp) j.push(nums[i])
        ans.push(...temp)
      }
    } else if (nums[i] == t) ans.push([nums[i]])
  }

  return ans
}
