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

        int l=0;
        while(t){
            t=t->next;
            l++;
        }
        if(n==l)return head->next;
        int len=l-n;

        ListNode *s=head;
        for(int i=0;i<len-1;i++){
            s=s->next;
        }
        s->next=s->next->next;

        return head;
    }
};