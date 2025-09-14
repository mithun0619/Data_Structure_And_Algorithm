/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0;
        int l2=0;
        
        ListNode *t1=headA;
        ListNode *t2=headB;
        while(t1){
            l1++;
            t1=t1->next;
        }

        while(t2){
            l2++;
            t2=t2->next;
        }

        int diff=l1-l2;
        t1=headA;
        t2=headB;
        if(diff>0){
            while(diff!=0){
                t1=t1->next;
                diff--;
            }
        }else if(diff<0){
            while(diff!=0){
                t2=t2->next;
                diff++;
            }
        }

        while (t1 && t2) {
            if (t1 == t2) return t1; 
            t1 = t1->next;
            t2 = t2->next;
        }
        return NULL;
    }
};