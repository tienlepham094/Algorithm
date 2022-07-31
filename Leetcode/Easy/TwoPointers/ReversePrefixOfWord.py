class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        word = list(word)
        for i in range(len(word)):
            if word[i]== ch:
                left = 0
                right = i 
                while left<right:
                    temp = word[left]
                    word[left] = word[right]
                    word[right] = temp
                    left+=1
                    right-=1
                break
        return ''.join(word)