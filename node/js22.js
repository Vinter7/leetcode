// 括号生成
function generateParenthesis(n) {
  let all = ['()']
  for (let i = 1; i < n; i++) {
    let out = []
    for (let j of all) {
      for (let k = 0; k < j.length; k++) {
        if (j[k] == ')') break
        if (k === 0) out.push('()' + j)
        out.push(j.slice(0, k + 1) + '()' + j.slice(k + 1))
      }
    }
    all = [...out]
  }
  return all
}
