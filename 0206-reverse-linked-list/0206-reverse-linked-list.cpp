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

   ListNode* helper(ListNode* head,ListNode* prev){
        if(head==nullptr){
            return prev;
        }
        ListNode* newhead=helper(head->next,head);
        head->next=prev;
        return newhead;
    }
    ListNode* reverseList(ListNode* head) {
        //iterative
        // ListNode* prev=nullptr;
        // ListNode* curr = head;

        // while (curr != nullptr) {
        //     ListNode* next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=next;
        // }

        // return prev;
        return helper(head,nullptr);
    }
};