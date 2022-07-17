# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        return self.createBST(0, len(nums)-1, nums)
    
    def createBST(self,l,r,nums):
        if l <= r:
            mid = (l+r)//2
            root = TreeNode(nums[mid])
            root.left = self.createBST(l, mid-1, nums)
            root.right = self.createBST(mid+1, r, nums)
            return root
        else:
            return None
        