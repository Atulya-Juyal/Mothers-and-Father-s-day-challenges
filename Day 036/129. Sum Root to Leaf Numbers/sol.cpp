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
    int sum=0,ans=0;
    void DFS(TreeNode *root){
        if(root==nullptr){
            return;
        }
        sum=sum*10+root->val;
        DFS(root->left);
        DFS(root->right);
        if(root->left==nullptr&&root->right==nullptr){
            ans+=sum;
        }
        sum-=root->val;
        sum/=10;
    }
    int sumNumbers(TreeNode* root) {
        DFS(root);
        return ans;
    }
};