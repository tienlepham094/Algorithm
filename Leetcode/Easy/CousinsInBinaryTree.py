class Solution:
    def isCousins(self, root: Optional[TreeNode], x: int, y: int) -> bool:
        parent = {}
        depth = {} 
        def dfs(v, d):
            depth[v.val] = d
            if v.left:
                parent[v.left.val] = v.val
                dfs(v.left, d+1)
            if v.right:
                parent[v.right.val] = v.val
                dfs(v.right, d+1)
        dfs(root, 0)
        if depth[x] == depth[y] and parent[x] != parent[y]:
            return True
        return False