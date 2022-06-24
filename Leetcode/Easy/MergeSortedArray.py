class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        while n>0:
            if m==0 or nums1[m-1]<nums2[n-1]:
                nums1[n+m-1] = nums2[n-1]
                n= n-1
            else:
                nums1[n+m-1] = nums1[m-1]
                m = m-1
        return nums1