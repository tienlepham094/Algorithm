class Solution:
    def mostFrequent(self, nums: List[int], key: int) -> int:
        list = {}
        for i in range(len(nums)-1):
            if nums[i]== key:
                if nums[i+1] not in list:
                    list[nums[i+1]]=1
                else:
                    list[nums[i+1]]+=1
        return max(list, key= lambda x: list[x])
        