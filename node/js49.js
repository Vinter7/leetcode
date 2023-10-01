function groupAnagrams(strs) {
  if (strs.length === 1) return [strs]
  let map = {}
  strs.forEach(str => {
    const key = str.split("").sort().join("")
    key in map ? map[key].push(str) : (map[key] = [str])
  })
  return Object.values(map)
}
