from collections import Counter
def commonChars(words):
    a = words[0]
    res = []
    for i in range(1,len(words)):
        d1 = Counter(a)
        d2= Counter(words[i])
        a  = d1 & d2
        res = list(a.elements())
    print(res)
    return res
a = commonChars(
["bella","roller","label"])
print(a)