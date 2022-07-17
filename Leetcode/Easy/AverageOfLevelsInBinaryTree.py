# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        
        if root == None:
            return []
        
        result = []
        
        ## storing the root node in the current level. (happen once only)
        curr_level = [root]
        
        
        while curr_level:
            node_val =  []  ## Values of nodes at the present level
            next_level = [] ## Left and right nodes of  each current-level's node (if exists) 
            
            ## Travesing each node present in current-level 
            for node in curr_level:
                node_val.append(node.val) 
                
                ## Appending left and right nodes to the next_level so we can traverse horizontally 
                if node.left:
                    next_level.append(node.left)
                    
                if node.right:
                    next_level.append(node.right)
                    
            
            ## Calculating Average
            result.append(sum(node_val)/len(node_val))
            
            ## Changing level to the next level of nodes
            curr_level = next_level
        
        return result
        