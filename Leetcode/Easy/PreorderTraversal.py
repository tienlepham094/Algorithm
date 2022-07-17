# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        self.helper(root, result)
        return result
        
    def helper(self, root: Optional[TreeNode], result : List):
        if not root:
            return None
        result.append(root.val)
        if root.left:
            self.helper(root.left, result)
        if root.right:
            self.helper(root.right, result)
            