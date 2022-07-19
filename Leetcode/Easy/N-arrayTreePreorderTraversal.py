"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        result =[]
        self.helper(root, result)
        return result
    def helper(self,root:'Node', result:List):
        if not root:
            return None
        result.append(root.val)
        for i in root.children:
            self.helper(i, result)