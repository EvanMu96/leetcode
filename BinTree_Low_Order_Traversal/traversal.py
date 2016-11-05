"""
Defination for a binary tree node
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
"""
class Solution(object):
    def levelOrder(self, root):
        if root == None:
            return
        data_return = []
        tree = []
        tree.append(root)
        while tree:
            new_tree = []
            data_return.append([n.val for n in q])
            for node in tree:
                if node.left:
                    new_tree.append(node.left)
                if node.right:
                    new_tree.append(node.right)
            tree = new_tree
        return data_return
