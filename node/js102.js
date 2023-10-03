const levelOrder = root => {
  const ans = []
  if (!root) return ans
  const left = levelOrder(root.left)
  const right = levelOrder(root.right)
  for (let i = 0; i < Math.max(left.length, right.length); i++) {
    ans[i] = []
    if (left[i]) ans[i].push(...left[i])
    if (right[i]) ans[i].push(...right[i])
  }
  ans.unshift([root.val])
  return ans
}
var levelOrder2 = function (root) {
  const ret = []
  if (!root) {
    return ret
  }

  const q = []
  q.push(root)
  while (q.length !== 0) {
    const currentLevelSize = q.length
    ret.push([])
    for (let i = 1; i <= currentLevelSize; ++i) {
      const node = q.shift()
      ret[ret.length - 1].push(node.val)
      if (node.left) q.push(node.left)
      if (node.right) q.push(node.right)
    }
  }

  return ret
}
