class Solution(object):
    def balancedStringSplit(self, s):
        """
        :type s: str
        :rtype: int
        """
        l=[]
        res=[]
        for i in range(len(s)):
            res.append(s[i])
            if(res.count("L")==res.count("R")):
                l.append(res)
                res=[]
        return len(l)