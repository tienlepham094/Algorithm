class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        tong = max(nums)
        arr = []
        curr = 0
        for i, item in enumerate(nums,1):
                if i==1 and item>=0:
                    arr.append(item)
                    curr = item
                elif i>=2:
                    curr=item+curr
                    if curr>=0:
                        arr.append(curr)
                    else:
                        curr = 0
                        
        for i in arr:
            if i>=tong:
                tong = i
        return tong