// 电话号码的字母组合
let m = [0, 0, 'abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz']

const func = str => {
  if (!str) return []
  if (str.length === 1) return m[+str[0]].split('')

  const ans = []
  for (const i of m[+str[0]])
    for (const j of func(str.slice(1))) ans.push(i + j)

  return ans
}
