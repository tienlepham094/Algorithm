class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        result = ""
        carry = 0
        a,b = list(a), list(b)
        
        while a or b or carry==1:
            if a:
                carry += int(a.pop())
            if b:
                carry += int(b.pop())
                
            result += str(carry%2) 
            
            if carry >= 2:
                carry = 1
                
            else:
                carry =0
        
        return result[::-1] #reverse the list