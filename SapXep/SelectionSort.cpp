#include <iostream>
using namespace std;

void selectionSort(int a[], int n){
	for (int i=0; i<n-1;i++){
		//Dung i de luu chi so cua phan tu nho nhat
		int min_pos = i;
		// Duyet qua tat ca cac ptu dung sau ptu hien tai va cap nhat chi
		// so phan tu nho nhat
		
		for(int j=i+1; j<n; j++){
			if(a[j]< a[min_pos]){
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}
int main(){
	int a[1000], n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	selectionSort(a,n);
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
