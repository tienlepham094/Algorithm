#include<iostream>
#include<deque>
using namespace std;

// hang doi 2 dau
// stack: LIFO
// queue: FIFO
// deque: double end queue

// size()
// push_front(): day vao dau
// push_back(): day vao cuoi
// pop_front(): xoa o dau
// pop_back(): xoa o cuoi
// empty()
// front(): lay ra phan tu o dau
// back(): lay ra phan tu o cuoi

int main(){
	deque<int> q;
	q.push_front(2);
	q.push_back(3);
	q.push_back(4);
	q.push_front(1);
	
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;
}

