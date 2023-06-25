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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans =add(l1,l2);
        return ans;
    }
        ListNode* add(ListNode* l1 ,ListNode* l2){
        int carry=0;
        ListNode* ahead=NULL;
        ListNode* atail=NULL;
        while(l1!=NULL || l2!=NULL){
            int v1=0,v2=0,sum;
            if(l1!=NULL){
                v1=l1->val;
            }
              if(l2!=NULL){
                v2=l2->val;
            }
            sum=v1+v2+carry;
            int dig=sum%10;
            ListNode *  curr = new ListNode(dig);
            if(atail==NULL){
                atail=curr;
                ahead=curr;
               
            }
            else{
                atail->next=curr;
                atail=curr;
            }
            carry=sum/10;
            if(l1!=NULL){
                l1=l1->next;
            }
            if(l2!=NULL){
                l2=l2->next;
            }
        }
        return ahead;
        }
        
};