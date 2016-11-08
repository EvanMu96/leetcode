/*求所有左子叶的和，运用到的二叉树的遍历，递归，添加一个helper方法用来表示当前节点是不是左子叶*/
/*先序遍历*/

class Solution {
public:
  int sumOfLeftLeaves(TreeNode* root) {
    if (!root || (!root->left && !root->right)) {
      return 0;
    }
    int res = 0;
    helper(root->left, true, res);
    helper(root->right, false, res);
    return res;
  }

  void helper(TreeNode* node, bool left, int& res) {
    if (!node) {
      return;
    }
    if (!node->left && !node->right && left)
      res += node->val;
    helper(node->left, true, res);
    helper(node->right, false, res);
  }
};
