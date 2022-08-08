class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        res=[]
        pointer = 0
        if(len(original)!=m*n):
            return []
        for i in range(m):
            temp = []
            for j in range(n):
                temp.append(original[pointer])
                pointer+=1
            res.append(temp)
        return res
        