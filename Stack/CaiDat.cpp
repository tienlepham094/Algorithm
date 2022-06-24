// =============== STACK-ngan xep =====================================
// Stack la 1 cau truc truu tuong, cac doi tuong trong stack phai
// lam viec theo 1 LIFO (last in first out) - doi tuong nao vao sau thi  ra truoc

// isEmpty: kiem tra xem stack rong hay khong
// Push: them mot doi tuong vao dau stack => theo co che LIFO
// Pop: lay phan tu dau stack va tra ve gia tri cua doi tuong dau stack dong thoi phai huy no di
// Top: xem thong tin stack dau danh sach nhung ko huy

#include <iostream>
using namespace std;
/*
	Nhap danh sach stack chua cac so nguyen, sau do xuat ra man hinh
*/

// khai bao cau truc mot node
struct node {
	int data; // chua gia tri
	struct node *pNext;// con tro lien ket
};
typedef struct node NODE;

//khai bao cau truc cua stack
struct stack{
	NODE *pTop; // dung con tro dau de quan li stack
	
};
typedef struct stack STACK;

//ham khoi tao mot node
NODE* KhoiTaoNode(int x){
	NODE *p = new NODE();
	if(p==NULL){
		cout<<"\nKhong du bo nho de cap phat";
		return NULL;
	}
	p->data = x;
	p->pNext= NULL;
	return p;
}

// ham khoi tao struct
void KhoiTaoStack(STACK &s){
	s.pTop = NULL;
}
//====================ham kiem tra=========================
bool isEmpty(STACK s){
	if(s.pTop==NULL) return true;
	else return false;
}
//====================ham push==============================
bool Push(STACK &s, NODE *p){
	if(p==NULL) return false;
	if(isEmpty(s)){
		s.pTop = p;// node p chinh la node dau
	}else {
		p->pNext = s.pTop;// cho con tro cua node p tro den node dau danh sach
		s.pTop = p;// cap nhat lai node dau
	}
	return true;
}
//===================Pop====================================
void Pop(STACK &s){ // x la gia tri can lay trong node
	if(!isEmpty(s)){
		return false;
	}else{
		s = s->next;
	}
	return true;
}
//=================Top====================================
int Top(STACK s){
	return s.pTop->data;
}
int main(){
	STACK st;
	KhoiTaoStack(st);
	int x;
	cout<<"Nhap phan tu can them: "<<endl;
	cin>>x;
	NODE *p = KhoiTaoNode(x);
	Push(st,p);
	cout<< Top(st);
}
