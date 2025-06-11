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
public:
    void inorder(TreeNode* root, vector<int>&sort){
        if(root){
            inorder(root->left,sort);
            sort.push_back(root->val);
            inorder(root->right,sort);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>sort;
        inorder(root,sort);
        int n = sort.size();
        int smallest = sort[k-1];
        return smallest;
    }
};