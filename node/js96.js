const numTrees = n => {
  if (n < 3) return n
  let dp = Array(n + 1).fill(0)
  dp[0] = 1
  dp[1] = 1
  dp[2] = 2
  for (let i = 3; i <= n; ++i)
    for (let j = 1; j <= i; ++j) dp[i] += dp[j - 1] * dp[i - j]
  return dp[n]
}
