def divideArray(nums):
    hashmap={}
    for i in nums:
        if i not in hashmap:
            hashmap[i]=1
        else:
            hashmap[i]+=1
    for i in hashmap.values():
        if i%2!=0:
            return False
    return True
nums=[3,2,3,2,2,2]
divideArray(nums)