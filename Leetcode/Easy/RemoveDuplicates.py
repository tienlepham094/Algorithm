def removeDuplicates(nums):
    """
    :type nums: List[int]
    :rtype: int
    """
    k = 1
    for i in range(1,len(nums)):
        if nums[i] != nums[i-1]:
            nums[k] = nums[i]
            k= k+1
    return k
removeDuplicates([1,1,2])