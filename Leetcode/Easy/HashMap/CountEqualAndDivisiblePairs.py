class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        d={}
        cnt=0
        for i in range(len(nums)):
            if nums[i] in d:
                for x in d[nums[i]]:
                    if (x*i)%k==0:
                        cnt+=1
                d[nums[i]].append(i)
            else:
                d[nums[i]]=[i]
                
        return cnt