#include<iostream>
using namespace std;


// dung de quy
int search(int a[],int l, int r, int x){
	if(l>r) return false;
	int mid = (l+r)/2;
	if(a[mid]==x) return true;
	else if(a[mid]>x) return search(a,l, mid-1,x);
	else return search(a, mid+1,r,x);
}
// không dùng de quy
bool binarySearch(int a[], int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid]==x) return true;
		else if(a[mid]>x) r = mid-1;
			else l = mid +1;
	}
	return false;
}
void sapxep(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			swap(a[i], a[j]);
		}
	}
}
void xuat(int a[], int n){
	for(int i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int a[10] = {0,1,4,3,5,9,7,8,6,2};
	int x;
	cin>>x;
	sapxep(a,10);
	xuat(a,10);
//	if(binarySearch(a,10,x)) cout<<"Success"<<endl;
//	else cout<<"Failed"<<endl;
	if(search(a,0,9,x)) cout<<"Success"<<endl;
	else cout<<"Failed"<<endl;
}
