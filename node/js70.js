function climbStairs(n) {
  let ans = new Array(n).fill(0)
  ans[1] = 1
  ans[2] = 2
  for (let i = 3; i <= n; i++) {
    ans[i] = ans[i - 1] + ans[i - 2]
  }
  return ans[n]
}
