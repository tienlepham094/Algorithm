class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        dict = {}
        for i in arr:
            if i not in dict:
                dict[i]=1
            else:
                dict[i]+=1
        for key, value in dict.items():
            
            if value==1:
                k-=1
                if k==0:
                    return key
        if k>0:
            return ""