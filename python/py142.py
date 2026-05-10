class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head:
            return None

        slow, fast = head, head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                # 找到相遇点后，重置一个指针到链表头部
                ptr1 = head
                ptr2 = slow

                # 同时移动两个指针，每次一步，直到它们相遇
                while ptr1 != ptr2:
                    ptr1 = ptr1.next
                    ptr2 = ptr2.next

                return ptr1  # 返回入环节点

        return None  # 如果没有环，返回 None
