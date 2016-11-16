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

    int maxDepth(TreeNode* root) {
      if (!root) return 0;
      int leftDepth = 1;
      int rightDepth = 1;
      leftDepth += maxDepth(root->left);
      rightDepth += maxDepth(root->right);

      return left>right?left:right;
    }

};
