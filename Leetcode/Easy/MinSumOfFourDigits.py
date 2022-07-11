class Solution(object):
    def minimumSum(self, num):
        """
        :type num: int
        :rtype: int
        """
        l=list(str(num))
        l.sort()
        firstPair=l[0]+l[3]
        secondPair=l[1]+l[2]
        summ=int(firstPair)+int(secondPair)
        return summ