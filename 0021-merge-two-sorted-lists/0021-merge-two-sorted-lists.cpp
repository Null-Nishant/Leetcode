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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>arr;
        ListNode* curr=list1;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        curr=list2;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* dummy=new ListNode(-1);
        curr=dummy;
        for(int i=0;i<arr.size();i++){
            curr->next=new ListNode(arr[i]);
            curr=curr->next;
        }
        return dummy->next;
    }
};