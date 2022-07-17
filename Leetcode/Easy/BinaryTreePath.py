# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        ans =[]
        self.help(root, "", ans)
        return ans 
    def help(self, root,s, ans):
        if root is None : return
        if root.left:
            self.help(root.left,s+str(root.val)+"->", ans)
        if root.right:
            self.help(root.right,s+str(root.val)+"->", ans)
        if root.left is None and root.right is None : ans.append(s+str(root.val))