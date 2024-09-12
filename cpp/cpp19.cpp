#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  int getLength(ListNode *head)
  {
    int length = 0;
    while (head)
    {
      ++length;
      head = head->next;
    }
    return length;
  }

  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *dummy = new ListNode(0, head); // 创建一个虚拟头节点，方便处理删除头节点的情况
    ListNode *cur = dummy;
    int length = getLength(head);
    for (int i = 1; i < length - n + 1; ++i)
    {
      cur = cur->next;
    }
    cur->next = cur->next->next;
    return dummy->next;
  }
};
