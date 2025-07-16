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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return nullptr;

        ListNode *t = head;

        // Dummy nodes for even and odd value lists
        ListNode *p = new ListNode(0);  // even values
        ListNode *q = new ListNode(0);  // odd values

        ListNode *r = p; // tail for even
        ListNode *s = q; // tail for odd
        int i=1;
        
        while (t) {
        if(i%2==1){
            s->next = t;
            s = s->next;
        }else{
            r->next = t;
            r = r->next;
        }
            t = t->next;
            i++;
        }

        // Combine odd list followed by even list
        s->next = p->next;
        r->next = nullptr;

        ListNode* result = q->next;

        delete p; 
        delete q; 

        return result;
    }
};
