class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = {}
        ans = ""
        words = s.split()
        for word in words:
            res[int(word[-1])] = word[:-1]
            
        for i in range(1, len(res)):
            ans += res[i]+" "
        ans += res[len(res)]
        return ans
    