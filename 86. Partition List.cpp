/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
      ListNode* l = new ListNode(0);
      ListNode* r = new ListNode(0);
      ListNode* l1=l;
      ListNode* r1=r;
      while(head)
      {
        if(head->val<x)
        {
          l1->next=head;
          l1=head;
        }
        else
        {
          r1->next=head;
          r1=head;
        }
        head=head->next;
      }
        l1->next=r->next;
        r1->next=nullptr;
        return l->next;
    }
};