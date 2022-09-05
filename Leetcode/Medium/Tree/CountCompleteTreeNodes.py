class Solution:
	def countNodes(self, root: Optional[TreeNode]) -> int:
		return self.count(root)

	def count(self, root):
		if not root:
			return 0

		return 1 + self.count(root.left) + self.count(root.right)