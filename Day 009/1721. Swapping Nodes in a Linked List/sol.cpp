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
    ListNode* swapNodes(ListNode* head, int k) {
            ListNode *left = head, *right = head;
        for(int i = 1; i < k; i++)
            left = left->next;
        ListNode *curr = left;
        while(curr->next != nullptr){
            curr = curr->next;
            right = right->next;
        }
        int t = left->val;
        left->val = right->val;
        right->val = t;
        return head;
    }
};