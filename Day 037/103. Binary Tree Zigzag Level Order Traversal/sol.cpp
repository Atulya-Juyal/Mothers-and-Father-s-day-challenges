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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) {
            return ans;
        }
        int flag = 0;
        deque<TreeNode*> q;
        q.push_front(root);
        while(!q.empty()){
            vector<int> level;
            int size = q.size();
            if(flag == 0){
                for(int i = 0; i < size; i++){
                    TreeNode* temp = q.front();
                    q.pop_front();
                    if(temp->left != NULL){
                        q.push_back(temp->left);
                    }
                    if(temp->right != NULL){
                        q.push_back(temp->right);
                    }
                    level.push_back(temp->val);
                }
                ans.push_back(level);
                flag = 1;
            }else {
                for(int i = 0; i < size; i++){
                    TreeNode* temp = q.back();
                    q.pop_back();
                    if(temp->right != NULL){
                        q.push_front(temp->right);
                    }
                    if(temp->left != NULL){
                        q.push_front(temp->left);
                    }
                    level.push_back(temp->val);
                }
                ans.push_back(level);
                flag = 0;
            }
        }
        return ans;
    }
};