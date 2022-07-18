class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        
        modes = {}
        
        def dfs(node):
            if not node: return node
            
            modes[node.val] = modes.get(node.val, 0) + 1
            
            dfs(node.left)
            dfs(node.right)
        
        dfs(root)
        
        result = []
        max_value = max(modes.values())
        for k, v in modes.items():
            if v == max_value:
                result.append(k)
        return result