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
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    ListNode *dummy = new ListNode(-1);
    ListNode *p = dummy;
    while (list1 && list2)
    {
      if (list1->val < list2->val)
      {
        p->next = list1;
        list1 = list1->next;
      }
      else
      {
        p->next = list2;
        list2 = list2->next;
      }
      p = p->next;
    }
    p->next = list1 == nullptr ? list2 : list1;
    return dummy->next;
  }
};