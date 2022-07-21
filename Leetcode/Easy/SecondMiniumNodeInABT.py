# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findSecondMinimumValue(self, root: Optional[TreeNode]) -> int:
        result = []
        self.dfs(root, result)
        result = sorted(result)
        min = result[0]
        for i in range(len(result)):
            if min < result[i]:
                return result[i]
                break
        return -1
        
    def dfs(self, root:Optional[TreeNode], result: List):
        if not root:
            return None
        result.append(root.val)
        if root.right:
            self.dfs(root.right, result)
        if root.left:
            self.dfs(root.left, result)
        