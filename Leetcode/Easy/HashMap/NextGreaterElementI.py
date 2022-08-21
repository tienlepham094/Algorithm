class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nextGreater = {} #value: greaterValueToTheRight
        stack = [nums2[0]]
        for i in range(1,len(nums2)):
            while stack and stack[-1] < nums2[i]:
                num = stack.pop()
                nextGreater[num] = nums2[i]
            stack.append(nums2[i])
        
        while stack:
            num = stack.pop()
            nextGreater[num] = -1
        
        ans = []
        for num in nums1:
            ans.append(nextGreater.get(num))
        return ans