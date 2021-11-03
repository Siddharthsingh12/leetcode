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
    int sum=0;
public:
    int sumNumbers(TreeNode* root) {
        if(!root) return sum;
        dfs(root,0);
        return sum;
    }
    void dfs(TreeNode* root,int currSum){
        currSum=currSum*10+root->val;
        if(!root->left&&!root->right)
            sum+=currSum;
        if(root->left) dfs(root->left,currSum);
        if(root->right) dfs(root->right,currSum);
    }
};