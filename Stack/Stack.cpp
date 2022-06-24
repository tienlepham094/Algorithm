#include <iostream>
#include <stack> // import thu vien stack
using namespace std;

//LIFO: last in first out
// push: them phan tu vao top
// pop: xoa phan tu o vi tri top
// top: lay phan tu o vi tri top
// size: tra ve size cua stack
// empty: boolean check co rong ko
// 0(1)

int main(){
	stack <int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	
	
	cout<<"Phan tu top cua stack: ";
	cout<< st.top()<<endl; // tra ve gia tri top
	cout<<"Size cua stack la: ";
	cout<<st.size()<<endl;
	
	// chuyen doi so nhi phan dung ngan xep
	int n; cin>>n;
	stack<int> stack;
	while(n!=0){
		st.push(n%2);
		n/=2;
	}
	while(!st.empty()){
		cout<< stack.top();
		stack.pop();
	}
	return 0;
}
