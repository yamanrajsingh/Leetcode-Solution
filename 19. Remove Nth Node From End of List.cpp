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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL || head==NULL && n==1){
             return NULL;
        }
        ListNode* temp =head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp =temp->next;
        }
        int pos = count-n+1;
        ListNode* pre=NULL;
        ListNode* curr=head;
        int m=1;
        while(m<pos)
        {  
            pre=curr;
            curr=curr->next;
            m++;
        }
        if(pre==NULL)
        {
            head=head->next;
            return head;
        }
        else{
        pre->next=pre->next->next;
        return head;
        }
    }
};