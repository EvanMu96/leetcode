# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def sumLeftLeaves(node, part=0, left=0):
            if node is None:
                return 0
            if node.left or node.right:
                # Branch
                return sumLeftLeaves(node.left, part, 1) + sumLeftLeaves(node.right, part, 0)
            # Leaf
            return node.val if left else 0
        return sumLeftLeaves(root)
