class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        dummy = ListNode(0)  # 创建一个虚拟头节点
        current = dummy  # 初始化当前指针
        carry = 0  # 初始化进位

        while l1 or l2 or carry:
            val1 = l1.val if l1 else 0  # 获取 l1 当前节点的值，如果 l1 已经遍历完则为 0
            val2 = l2.val if l2 else 0  # 获取 l2 当前节点的值，如果 l2 已经遍历完则为 0
            total = val1 + val2 + carry  # 计算当前位的总和

            carry = total // 10  # 更新进位
            current.next = ListNode(total % 10)  # 创建新节点并连接到结果链表
            current = current.next  # 移动当前指针

            if l1:
                l1 = l1.next  # 移动 l1 的指针
            if l2:
                l2 = l2.next  # 移动 l2 的指针

        return dummy.next  # 返回结果链表的头节点
