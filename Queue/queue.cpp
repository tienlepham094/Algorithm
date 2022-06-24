// LIFO : last in first out
// O(1)
// push : them phan tu vao cuoi hang doi
// pop : xoa dinh hang doi
// empty
// size
// front

#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> q;
	q.push(1);
	q.push(2);
	cout<<q.front()<<endl; // in ra dinh cua hang doi
	return 0;
}
