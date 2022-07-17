  # Definition for a binary tree node.
	# class TreeNode:
	#     def __init__(self, val=0, left=None, right=None):
	#         self.val = val
	#         self.left = left
	#         self.right = right
	
	class Solution:
		def get_all_leaf_value(self, root: TreeNode):
			leaf_values = []

			def _get_leaf_values(root: TreeNode):
				nonlocal leaf_values

				if not root:
					return

				if (not root.left) and (not root.right):
					leaf_values.append(root.val)

				_get_leaf_values(root.left)
				_get_leaf_values(root.right)

			_get_leaf_values(root)

			return leaf_values


		def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
			root1_leaves = self.get_all_leaf_value(root1)
			root2_leaves = self.get_all_leaf_value(root2)

			return root1_leaves == root2_leaves