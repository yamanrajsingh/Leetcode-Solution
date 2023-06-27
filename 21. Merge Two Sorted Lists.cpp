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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
        {
            return list2;
        }
         if(list2==NULL)
        {
            return list1;
        }
        if(list1->val<=list2->val)
        {
            return solve(list1,list2);
        }
        else
        {
            return solve(list2,list1);
        }
        
    }
    ListNode* solve(ListNode* list1,ListNode* list2)
    {
        if(list1->next==NULL)
        {
            list1->next=list2;
            return list1;
        }
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* nest1=list1->next;
        while(nest1!=NULL && temp2!=NULL)
        {
            if((temp1->val<=temp2->val) && (temp2->val<=nest1->val))
            {
                temp1->next=temp2;
                ListNode* nest2=temp2->next;
                temp2->next=nest1;
                temp1=temp2;
                temp2=nest2;
            }
            else
            {
                temp1=nest1;
                nest1=nest1->next;
                if(nest1==NULL)
                {
                    temp1->next=temp2;
                    return list1;
                }
            }
        }
        return list1;
    }
};