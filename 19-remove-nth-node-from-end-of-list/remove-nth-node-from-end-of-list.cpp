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
      
        ListNode *t=head;
        int len=0;
        while(t){
            t=t->next;
            len++;
         }
        if(len==1)return head->next;
        if (n == len) return head->next;

        len=len-n;
        t=head;
        while(len>1){
            t=t->next;
            len--;
        }
        t->next=t->next->next;
        return head;
    }
    
};