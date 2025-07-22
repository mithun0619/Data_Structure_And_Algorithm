class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0) return head;

        vector<int> vec;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        int n = vec.size();
        k = k % n;
        if (k == 0) return head;

        rotate(vec.begin(), vec.begin() + (n - k), vec.end());

        ListNode *dummy = new ListNode(0);
        ListNode *prev = dummy;
        for (int val : vec)
        {
            prev->next = new ListNode(val);
            prev = prev->next;
        }
        return dummy->next;
    }
};