class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        def BinarySearch(array, target):
            left = 0
            right = len(arr)-1
            while left<=right:
                mid = (left+right)//2
                if array[mid]==target:
                    return mid
                elif array[mid]<target:
                    left = mid+1
                elif array[mid]>target:
                    right = mid-1
            return -1
        array = sorted(arr)
        for i in range(len(arr)):
            index = BinarySearch(array, array[i]*2)
            if index !=-1 and index!=i:
                return True
        return False
