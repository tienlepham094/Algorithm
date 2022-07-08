# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        sum1 = 0
        
        def check(r):
            sum1 = 0
            if r and low<=r.val<=high:
                sum1+= r.val
                
                sum1+=check(r.left)
                sum1+=check(r.right)
                
            elif r and r.val>high:
                sum1+=check(r.left)
                
            elif r and r.val<low:
                sum1+=check(r.right)
            
            return sum1
        
        return check(root)