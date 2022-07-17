# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def is_same(self,Root,subRoot):
        if not Root and not subRoot: return True
        if not Root or not subRoot: return False
        if Root.val != subRoot.val: return False
        
        return self.is_same(Root.left,subRoot.left) and self.is_same(Root.right,subRoot.right)
        
    def isSubtree(self, Root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not Root and not subRoot: return True
        if not Root or not subRoot: return False
        return self.is_same(Root,subRoot) or self.isSubtree(Root.left,subRoot) or self.isSubtree(Root.right,subRoot)