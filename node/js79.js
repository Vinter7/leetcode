const exist = (net, w) => {
  const n = net.length
  const m = net[0].length
  const steps = [
    [-1, 0],
    [1, 0],
    [0, -1],
    [0, 1],
  ]
  const find = (i, j, w) => {
    if (net[i][j] != w[0]) return false
    if (w.length == 1) return true
    const rc = net[i][j]
    net[i][j] = '-'
    for (const [s1, s2] of steps) {
      const ii = i + s1
      const jj = j + s2
      if (ii >= 0 && jj >= 0 && ii < n && jj < m)
        if (find(ii, jj, w.slice(1))) return true
    }
    net[i][j] = rc
    return false
  }

  for (let i = 0; i < n; ++i)
    for (let j = 0; j < m; ++j) if (find(i, j, w)) return true

  return false
}

console.log(
  exist(
    [
      ['A', 'B', 'C', 'E'],
      ['S', 'F', 'E', 'S'],
      ['A', 'D', 'E', 'E'],
    ],
    'ABCESEEEFS'
  )
)
