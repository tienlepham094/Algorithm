#include <iostream>
using namespace std;

int a[100];
int l[100];
int n;
int main(){
	cout<<"Nhap so n: "<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	// buoc co so cua quy hoach dong
	l[0] = 1;
	int lmax; // luu gia tri max tu dau den phan tu i
	
	//quy hoach dong
	for(int i =1; i<n; i++){
		lmax=0;
		for(int j=0; j<i; j++){
			if(a[i]> a[j]){
				if(l[j]>lmax) lmax = l[j];
			}
			l[i] = lmax +1;
		}
	}
	int k=1;
	for(int i=0; i<n; i++){
		if(l[i]==k) {
			cout<<a[i]<<" ";
			k++;
		}
		else if(l[i]==l[i+1] && a[i]==a[i+1]) cout<<a[i]<<" ";
	}
//for(int i=0; i<n; i++){
//	cout<<l[i]<<" ";
//}
}
