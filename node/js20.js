function isValid(s) {
  let arr = [],
    $ = {
      '(': ')',
      '[': ']',
      '{': '}',
    }
  for (let i of s) {
    if ($[i]) arr.push($[i])
    else if (arr.pop() !== i) return false
  }
  if (arr.length !== 0) return false
  else return true
}
