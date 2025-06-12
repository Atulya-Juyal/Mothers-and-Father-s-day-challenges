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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    void make(vector<int>& nums, int low, int high, TreeNode* &oroot) {
        if (low > high) return;

        int mid = low + (high - low) / 2;
        oroot = new TreeNode(nums[mid]);

        make(nums, low, mid - 1, oroot->left);
        make(nums, mid + 1, high, oroot->right);
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* curr=head;
        vector<int> nums;
        while (curr) {
            nums.push_back(curr->val);
            curr = curr->next;
        }
        TreeNode* oroot = nullptr;
        make(nums, 0, nums.size() - 1, oroot);
        return oroot;
    }
};