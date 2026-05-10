class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: bool
        """
        if not head:
            return True

        # 1. 使用快慢指针找到链表的中点
        slow, fast = head, head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        # 2. 反转后半部分链表
        prev = None
        current = slow
        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node

        # 3. 比较前半部分和反转后的后半部分
        left, right = head, prev
        while right:  # 只需要比较右半部分的节点数
            if left.val != right.val:
                return False
            left = left.next
            right = right.next

        return True
