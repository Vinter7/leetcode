class Solution(object):
    def reverseList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        prev = None
        current = head

        while current:
            next_node = current.next  # 保存下一个节点
            current.next = prev  # 反转当前节点的指针
            prev = current  # 将 prev 移动到当前节点
            current = next_node  # 将 current 移动到下一个节点

        return prev  # 最后 prev 将指向新的头节点
