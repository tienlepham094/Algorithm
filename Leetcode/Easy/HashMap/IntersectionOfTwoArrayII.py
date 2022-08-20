class Solution:
		def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
			d1 = {}
			for number in nums1:
				d1[number] = d1.get(number, 0) + 1

			d2 = {}
			for number in nums2:
				d2[number] = d2.get(number, 0) + 1

			result = []

			for key1, value1 in d1.items():
				value2 = d2.get(key1, None)
				if value2:
					count = min(value1, value2)
					for i in range(count):
						result.append(key1)

			return result