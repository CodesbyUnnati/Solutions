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
    ListNode* reverseList(ListNode* head) {
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* next;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;  // they are just moving forward 
            current=next;
        }
       return prev; //it will only remain at last that will be a not null value...all will go NULL.
    }
};
