#include <iostream>
using namespace std;

int Partition(int a[], int start, int end){
	int pivot = a[end];
	int partitionIndex = start;// set partition index as start initially
	
	for(int i= start; i<end;i++){
		if(a[i]<=pivot){
			swap(a[i], a[partitionIndex]); // swap if element is lesser than pivot
			partitionIndex ++;
		}
	}
	swap(a[partitionIndex], a[end]); // swap pivot with element at partition index
	return partitionIndex;
	
}

void QuickSort(int a[], int start, int end){
	if(start<end){
		int partitionIndex  = Partition(a, start,end);
		QuickSort(a, start, partitionIndex-1);
		QuickSort(a, partitionIndex+1, end);
	}
}
int main(){
	int a[]={7,6,5,4,3,2,1,0};
	QuickSort(a,0,7);
	for(int i=0; i< 8; i++){
		cout<<a[i]<<" ";
	}
}
