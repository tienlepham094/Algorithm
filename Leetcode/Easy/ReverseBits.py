def reverseBits(n):
    result=""
    while n:
        if n%2==0:
            result=result+"0"
        else:
            result=result+"1"
        n=n>>1
    return result

print(reverseBits(1011))