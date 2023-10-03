const isSymmetric = root => {
  if (!root) return true
  return cmp(root.left, root.right)
}

const cmp = (left, right) => {
  if (left == right) return true
  if (left?.val != right?.val) return false
  return cmp(left.left, right.right) && cmp(left.right, right.left)
}
