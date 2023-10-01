const subsets = nums => {
  const ans = [[]]
  for (const i of nums) for (const j of [...ans]) ans.push([...j, i])
  return ans
}
