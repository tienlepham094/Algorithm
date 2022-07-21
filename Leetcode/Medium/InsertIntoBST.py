# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        t=TreeNode(val)
        p=root
        if root is None:
            return t
        while p:
            if p.val<val and p.right!=None:
                p=p.right
            elif p.val<val and p.right==None:
                break
            elif p.val>val and p.left!=None:
                p=p.left
            else:
                break
        if p.val<val:
            p.right=t
        else:
            p.left=t
        return root