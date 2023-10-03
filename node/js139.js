const wordBreak = (str, words) => {
  const ans = Array(str.length + 1).fill(0)
  ans[0] = 1
  for (let i = 1; i < ans.length; i++) {
    if (!ans[i - 1]) continue
    for (const j of words) {
      const jl = j.length
      if (jl > str.length - i + 1) continue
      if (j == str.substr(i - 1, jl)) ans[i + jl - 1] = 1
      if (ans[str.length]) return true
    }
  }
  console.log(ans)
  return false
}

console.log(wordBreak('leetcode', ['leet', 'code']))
