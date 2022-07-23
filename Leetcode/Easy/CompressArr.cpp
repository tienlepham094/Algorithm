#include<iostream>
#include<algorithm>

using namespace std;

void compressArr(int a[], int n){
	sort(a, a+n);

	int i=0, j=0;
	while(i<n){
		j=i;
		while((j<n-1)&&(a[j+1]==a[j]+1)){
			j++;
		}
		
		if(i==j) {
			cout<<a[i]<<" ";
			i++;
		}else{
			cout<<a[i]<<"->"<<a[j]<<" ";
			i = j+1;
		}
		
	}
}
int main(){
	int arr[7]= {1,3,4,5,6,8,10};
	compressArr(arr,7);
	return 0;
}
