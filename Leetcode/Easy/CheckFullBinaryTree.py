# Tree node structure
class Node:
 
    # Constructor of the node class for creating the node
    def __init__(self , key):
        self.key = key
        self.left = None
        self.right = None

def isFullTree(root):
 
    # If empty tree
    if root is None:   
        return True
     
    # If leaf node
    if root.left is None and root.right is None:
        return True
 
    # If both left and right subtress are not None and
    # left and right subtress are full
    if root.left is not None and root.right is not None:
        return (isFullTree(root.left) and isFullTree(root.right))
     
    # We reach here when none of the above if conditions work
    return False 
# Driver Program
root = Node(10);
root.left = Node(20);
root.right = Node(30);
 
root.left.right = Node(40);
# root.left.left = Node(50);
# root.right.left = Node(60);
# root.right.right = Node(70);
 
# root.left.left.left = Node(80);
# root.left.left.right = Node(90);
# root.left.right.left = Node(80);
# root.left.right.right = Node(90);
# root.right.left.left = Node(80);
# # root.right.left.right = Node(90);
# root.right.right.left = Node(80);
# root.right.right.right = Node(90);
 
if isFullTree(root):
    print ("The Binary tree is full")
else:
    print ("Binary tree is not full")