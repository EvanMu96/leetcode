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
/*思路：1.如果根节点为空，则深度为0，返回0，递归的出口2.如果根节点不为空，那么深度至少为1，然后我们求他们左右子树的深度3.比较左右子树深度值，返回较大的那个4.通过递归调用*/
