class Solution(object):
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        from collections import Counter

        need = Counter(t)  # 需要的字符及其数量
        window = {}  # 当前窗口中字符及其数量

        have, need_count = 0, len(need)  # 已满足的字符种类数和需要满足的总字符种类数
        res = ""  # 最小覆盖子串
        left = 0  # 窗口左边界

        for right, char in enumerate(s):
            if char in need:
                window[char] = window.get(char, 0) + 1
                if window[char] == need[char]:  # 满足当前字符的需求
                    have += 1

            while have == need_count:  # 当前窗口满足所有需求
                if not res or right - left + 1 < len(res):
                    res = s[left : right + 1]  # 更新最小覆盖子串

                left_char = s[left]
                if left_char in need:
                    window[left_char] -= 1
                    if window[left_char] < need[left_char]:  # 不再满足当前字符的需求
                        have -= 1

                left += 1  # 收缩窗口

        return res
