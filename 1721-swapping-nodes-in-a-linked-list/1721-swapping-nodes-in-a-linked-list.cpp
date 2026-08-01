class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* low = head;
        ListNode* high = head;
        ListNode* curr = head;

        // Move curr to kth node
        for (int i = 1; i < k; i++) {
            curr = curr->next;
        }

        // Move high k steps ahead
        for (int i = 0; i < k; i++) {
            high = high->next;
        }

        while (high) {
            low = low->next;
            high = high->next;
        }

        swap(curr->val, low->val);

        return head;
    }
};