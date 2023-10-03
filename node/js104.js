const maxDepth = root =>
  root ? Math.max(maxDepth(root.left), maxDepth(root.right)) + 1 : 0
