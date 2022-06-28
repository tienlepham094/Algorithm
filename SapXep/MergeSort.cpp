#include <iostream>
using namespace std;

void merge(int array[], int left, int mid, int right){
	int subArrayOne = mid - left + 1; // do dai mang 1
    int subArrayTwo = right - mid; // do dai mang 2
    
     // Create temp arrays
    int *leftArray = new int[subArrayOne];
    int *rightArray = new int[subArrayTwo];
    
	// Copy data to temp arrays leftArray[] and rightArray[]
    for (int i = 0; i < subArrayOne; i++) leftArray[i] = array[left + i];
    for (int j = 0; j < subArrayTwo; j++) rightArray[j] = array[mid + 1 + j];
    
    int indexOfSubArrayOne = 0;// Initial index of first sub-array
    int indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
void mergeSort(int arr[], int begin, int end){
	// thuat toan sap xep tron
	if (begin >= end)
        return; // Returns recursively
 
    int mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
	
}
int main(){
	int n, a[100];
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
