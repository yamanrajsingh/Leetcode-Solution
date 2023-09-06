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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       vector<ListNode*> ans(k);
       int count=0;
       for(ListNode* temp=head;temp;temp=temp->next)
       {
           count++;
       } 
      int n = count/k;
      int e = count%k;
      ListNode* temp=head;
      ListNode* pre=nullptr;
      for(int i=0;temp&&i<k;i++,e--)
      {
      ans[i]=temp;
      for(int j=0;j<n+(e > 0);j++)
      {
          pre=temp;
          temp=temp->next;
      }
      pre->next=nullptr;
      }
       return ans;  
    }
};