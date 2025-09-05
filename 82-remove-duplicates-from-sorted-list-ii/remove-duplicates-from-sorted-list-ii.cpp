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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *t=head;
        ListNode *dummy=new ListNode(0);
        ListNode *d=dummy;

        while(t){
            int v=t->val;
            if(t->next && t->next->val==v){
                while(t && t->val==v){
                    t=t->next;
                }
            }else{
            d->next=t;
            d=d->next;
            t=t->next;
            }
    }
        d->next=nullptr;
        return dummy->next;
    }
};