class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        res = []
        def dfs(v):
            if not v: return 
            for w in v.children:
                dfs(w)
            res.append(v.val)
        dfs(root)
        return res