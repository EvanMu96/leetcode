/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);

        if (rh == lh) {
            return pow(2, lh) + countNodes(root->right);
        }
        return pow(2, rh) + countNodes(root->left);
    }
    int getHeight(TreeNode* root) {
        //get height of the tree
        int h = 0;
        while (root) {
            root = root->left;
            h++;
        }
        return h;
    }
};
