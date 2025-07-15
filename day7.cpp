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
        ListNode *t=head;
        ListNode *p=new ListNode(0);
        ListNode *q=new ListNode(0);
        ListNode *r=p;
        ListNode *s=q;

        while(t){
            if(t->val<x){
                r->next=t;
                r=r->next;
                t=t->next;
            }
            else
            {
                s->next=t;
                s=s->next;
                t=t->next;
            }
        }
        r->next=q->next;
        s->next=nullptr;
        return p->next;
    }
};