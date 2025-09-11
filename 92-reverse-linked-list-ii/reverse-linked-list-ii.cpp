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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *prev=dummy;

        int c=1;
        while(c<left){
            prev=prev->next;
            c++;
        }

        ListNode *next=nullptr;
        ListNode *curr=prev->next;
        ListNode *p=nullptr;
        while(c<=right){
            next=curr->next;
            curr->next=p;
            p=curr;
            curr=next;
            c++;
        }
        prev->next->next=curr;
        prev->next=p;

        return dummy->next;
    }
};