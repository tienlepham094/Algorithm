# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        else:
            left = self.maxDepth(root.left) + 1
            right = self.maxDepth(root.right) + 1
            if left >= right:
                return left
            else: 
                return right