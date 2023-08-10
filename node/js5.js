// 最长回文子串
function longestPalindrome(s) {
  let n = s.length
  let t = '#'
  for (let i = 0; i < n; i++) {
    t += s[i] + '#'
  }
  // let p = new Array(t.length).fill(0)
  let c = 0,
    max = 0

  for (let i = 0; i < t.length; i++) {
    let temp = 0
    let ii = 1
    while (t[i - ii] && t[i + ii] && t[i - ii] === t[i + ii]) {
      // p[i] += 1
      temp += 1
      ii += 1
    }
    if (temp > max) {
      max = temp
      c = i
    }
  }
  let ans = ''
  for (const i of t.slice(c - max, c + max)) i !== '#' && (ans += i)

  return ans
}
