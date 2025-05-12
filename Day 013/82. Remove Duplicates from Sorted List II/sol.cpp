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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        unordered_map<int,int>umap;
        ListNode*temp = head;
        vector<int>arr;
        while(temp){
            umap[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        while(temp){
            if(umap[temp->val] == 1) arr.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        if(!arr.size()) return NULL;
        for(int i=0;i<arr.size()-1;i++){
            temp->val = arr[i];
            temp = temp->next;
        }
        temp->val = arr[arr.size()-1];
        temp->next = NULL;
        return head;
    }
};