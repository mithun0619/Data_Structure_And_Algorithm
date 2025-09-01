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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;
       int count=0;

       ListNode *t=head;
       while(t){
        count++;
        t=t->next;
       }
    
    int mid=count/2;
      
    t=head;
    for(int i=0;i<mid-1;i++){
        t=t->next;
    }
    t->next=t->next->next;
        return head;
        
    }
};