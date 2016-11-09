/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 使用递归的解法
 */
class Solution {
public:
    bool ismirror(TreeNode *p, TreeNode *q){
        if(!p&&!q) return true;
        else if(!p||!q) return false;

        if(p->val==q->val) return ismirror(p->left,q->right) && ismirror(p->right,q->left);
        else return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        return ismirror(root->left, root->right);
    }
};
