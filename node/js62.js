function uniquePaths(m, n) {
  const net = new Array(m).fill(0).map(() => new Array(n).fill(0))
  for (let i = 0; i < m; i++) net[i][0] = 1
  for (let j = 0; j < n; j++) net[0][j] = 1
  for (let i = 1; i < m; i++)
    for (let j = 1; j < n; j++) net[i][j] = net[i - 1][j] + net[i][j - 1]

  return net[m - 1][n - 1]
}
