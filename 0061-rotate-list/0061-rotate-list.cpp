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
int leng(ListNode* head){
    if(head==nullptr) return 0;
    int count=0;
    ListNode* curr=head;
    while(curr!=nullptr){
        curr=curr->next;
        count++;
    }
    return count;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
         k=k%leng(head);
         if(k==0) return head;
        ListNode *first=head,*second=head;
        for(int i=0;i<k;i++){
            second=second->next;
        }
        while(second->next!=nullptr){
            first=first->next;
            second=second->next;
        }
        ListNode *newHead=first->next;
        first->next=nullptr;
        second->next=head;
        return newHead;
    }
};