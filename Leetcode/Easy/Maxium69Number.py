class Solution(object):
    def maximum69Number (self, num):
        """
        :type num: int
        :rtype: int
        """
        list1=list(str(num))
        for i in range(len(list1)):
            if list1[i]=='6':
                list1[i]='9'
                break
        return ''.join(list1)