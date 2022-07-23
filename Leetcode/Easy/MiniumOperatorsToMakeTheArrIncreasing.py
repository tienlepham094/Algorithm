class Solution(object):
    def minOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums)==1:
            return 0
        cnt =0
        for i in range(len(nums)-1):
            if nums[i] == nums[i+1]:
                cnt = cnt+1
                nums[i+1]= nums[i]+1
            elif nums[i]> nums[i+1]:
                temp = nums[i] - nums[i+1]
                cnt = cnt +temp+1
                nums[i+1] = nums[i+1] + temp +1
        return cnt