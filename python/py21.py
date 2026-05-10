class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        dummy = ListNode(0)  # 创建一个虚拟头节点
        current = dummy  # 初始化当前指针

        while list1 and list2:
            if list1.val < list2.val:
                current.next = list1  # 将较小的节点连接到结果链表
                list1 = list1.next  # 移动 list1 的指针
            else:
                current.next = list2  # 将较小的节点连接到结果链表
                list2 = list2.next  # 移动 list2 的指针
            current = current.next  # 移动当前指针

        # 如果其中一个链表还有剩余节点，直接连接到结果链表
        current.next = list1 if list1 else list2

        return dummy.next  # 返回合并后的链表头节点
