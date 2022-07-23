#include <iostream>
#include<algorithm>
using namespace std;
#include <map>
void check(int a[], int b[], int c[], int k, int m, int n){
	// empty map container
    map<int, int> mp;
    for(int i=0; i<k; i++){
    	mp[a[i]]++;
	}
	for(int i=0; i<m; i++){
    	mp[b[i]]++;
	}
	for(int i=0; i<n; i++){
    	mp[c[i]]++;
	}
	for (auto i = mp.begin(); i != mp.end(); i++){
		  if(i.second>2){
        	cout<<i.first<<" ";
		}
	}
	
}
int main(){
	int a[4]={1,2,3,7};
	int b[4] = {2,4,7,10};
	int c[3] = {1,4,7};
	check(a,b,c,4,4,3);
}
