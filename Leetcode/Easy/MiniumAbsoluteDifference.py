# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        result = []
        self.dfs(root, result)
        result = sorted(result)
        min = result[1]-result[0]
        for i in range(len(result)-1):
            if result[i+1] - result[i] <= min:
                min = result[i+1] - result[i]
        return min 
    def dfs(self, root:Optional[TreeNode], result: List):
        if not root:
            return None
        result.append(root.val)
        if root.right:
            self.dfs(root.right, result)
        if root.left:
            self.dfs(root.left, result)