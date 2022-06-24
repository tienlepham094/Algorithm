class Solution:
    def mySqrt(self, x):
        min=0
        max=x
        while True:
            mid=(max+min)//2
            if min>max:
                return max
            if mid*mid==x:
                return mid
            else:
                if mid*mid>x:
                    max=mid-1
                else:
                    min=mid+1
        return 0