#include <iostream>
using namespace std;

void insertionSort(int a[], int n){
	for(int i=1; i<n; i++){
		//lay ra ptu o vi tri thu i
		int x = a[i];
		int pos = i-1; // position tiem nang
		
		while(pos>=0 && x<a[pos]){
			a[pos+1] =a[pos];
			pos--;
			// dich tung phan tu sang ben phai
		}
		a[pos+1] = x;
	}
}
int main(){
	int a[100], n;
	cout<< "Nhap so luong phan tu: ";
	cin>>n;
	
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	
	insertionSort(a,n);
	for(int i=0; i<n;i++){
		cout<<a[i]<< " ";
	}
}

