# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        arr = []
        self.helper(root, arr)
        return arr[k-1]
    def helper(self, root, array):
        if not root:
            return None
        self.helper(root.left, array)
        array.append(root.val)
        self.helper(root.right, array)
        