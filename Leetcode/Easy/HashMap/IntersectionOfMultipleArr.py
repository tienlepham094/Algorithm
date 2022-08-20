class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        d = {}
        l = []
        k = len(nums)
        for i in nums:
            for j in range(0,len(i)):
                if i[j] not in d:
                    d[i[j]] = 1
                else:
                    d[i[j]] += 1
        for k,v in d.items():
            if v == len(nums):
                l.append(k)
            else:
                continue
        l.sort()
        return l