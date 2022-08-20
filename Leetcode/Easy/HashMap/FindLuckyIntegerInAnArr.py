class Solution:
    def findLucky(self, arr: List[int]) -> int:
        dict={}
        for i in arr:
            if i in dict:
                dict[i] +=1
            else:
                dict[i] = 1
        list =[]
        for key, value in dict.items():
            if key==value:
                list.append(key)
        list_sort = sorted(list)
        if(len(list_sort)==0):
            return -1
        else:
            return list_sort[-1]