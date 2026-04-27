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

    ListNode *reverseLL(ListNode *t){
        ListNode *curr=t;;
        ListNode *prev=nullptr;
        ListNode *next=nullptr;

        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *first=head;

        ListNode *slow=head;
        ListNode *fast=head;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *newHead=reverseLL(slow->next);
        ListNode *second=newHead;
        while(second){
            if(first->val!=second->val){
                reverseLL(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseLL(newHead);
        return true;
    }
};