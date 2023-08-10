# 无重复字符的最长子串
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sub = ""  # 不重复字符串
        max = 0
        for i in s:
            if i in sub:
                sub = sub[sub.index(i) + 1 :]
            sub += i
            if len(sub) > max:
                max = len(sub)
        return max
