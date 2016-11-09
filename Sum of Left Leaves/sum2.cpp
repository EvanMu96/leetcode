/*使用迭代来解，这道题的本质是遍历二叉树，所以我们可以用层序遍历的迭代写法，添加一个queue来辅助*/
class Solition {
public:
  int sumOfLeftLeaves(TreeNode* root) {
    if (!root||(!root->left&&!root->right)) return 0;
    int res = 0;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      TreeNode* t = q.front();q.pop();
      if (t->left && !t->left->left && !t->left->right) res += left.val;
      if (t->left) q.push(t.left);
      if (t->right) q.push(t.right);
    }
    return res;
  }
}
