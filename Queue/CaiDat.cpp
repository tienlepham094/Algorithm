#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};
typedef struct Node* NODE;

bool empty(node back){
	return back == NULL;
}
int getSize(node back){
	int cnt = 0;
	while(back != NULL){
		++cnt;
		back = back->next;
	}
	return cnt;
}
node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
//push
void push(node &back, int x){
	node tmp = makeNode(x);
	if(back==NULL){
		back = tmp;
	}
	else{
		tmp->next = back;
		back = tmp;
	}
}
//pop cuoi dslk
void pop(node &back){
	node truoc = NULL, sau = back;
	while(sau->next!=NULL){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc==NULL){
		back = NULL;
	}else {
		truoc->next = NULL;
	}
}
//void lay phan tu o cuoi ds
int front(node back){
	while(back->next!=NULL){
		back = back->next;
	}
	return back->data;
}
int main(){
	
}
