# count bit zero using binary search
def check(arr, n):
	l=0
	r=n-1
	while l<=r:
		if arr[l]==1:
			return 0
		mid = (l+r)//2
		# print("left: "+ str(l))
		# print("right: "+ str(r))
		# print("mid: "+ str(mid))
		if arr[mid]==0 and arr[mid+1]==1:
			return mid+1
		elif arr[mid]==0 and arr[mid+1]==0:
			l = mid+1
		elif arr[mid]==1:
			r = mid-1
		# return mid
arr=[1,1,1,1]
print(len(arr))
print(check(arr,len(arr)))
