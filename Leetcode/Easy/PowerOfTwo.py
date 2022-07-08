def isPowerOfTwo(n):
    print(n)
    if n==2 or n==1:
        print("true")
        return True
    elif n%2!=0:
        print("false")
        return False
    isPowerOfTwo(n/2)

isPowerOfTwo(16)