// 无重复字符的最长子串
function lengthOfLongestSubstring(s) {
  let sub = '',
    save = 0
  for (const i of s) {
    let j = sub.indexOf(i)
    if (~j) sub = sub.substring(j + 1) + i
    else {
      sub += i
      if (sub.length > save) save = sub.length
    }
  }
  return save
}
