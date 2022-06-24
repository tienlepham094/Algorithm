class Solution(object):
    def singleNumber(self, nums):
        # using hashset
        """
        :type nums: List[int]
        :rtype: int
        """
        result={}
        for n in nums:
            if n not in result:
                result[n] = 1
            else:
                del result[n]
        return list(result.keys())[0]