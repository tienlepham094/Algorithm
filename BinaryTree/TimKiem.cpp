// các cách duyet cay
// NLR
// NRL
// LNR
// RNL
#include<iostream>
using namespace std;
int MAX = INT_MIN; // gan cho bien MAX la gia tri nho nhat thuoc int

struct node {
	int data;
	struct node *pLeft;
	struct node *pRight;
};
typedef struct node NODE;
typedef NODE *TREE;
NODE * KhoiTaoNode(int x){
	NODE *p = new NODE;
	p->data = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
void NLR(TREE t){
	if(t!=NULL){
		cout<<t->data<<" ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}
 // ham kiem tra node
 // neu node co ton tai trong cay thi tra ve node do - con khong tra ve null
NODE * TimKiem(TREE t, int x){
 	if(t==NULL) return NULL;
 	else{
 		if(x<t->data){
 			TimKiem(t->pLeft, x);
		 }
		else if(x>t->data)
		 	TimKiem(t->pRight, x);
		else
			return t; // tra ve node can tim kiem
	 }
}
int TimMax(TREE t){
	if(t!=NULL){
		if(MAX<t->data){
			MAX = t->data ;
		}
		TimMax(t->pLeft);
		TimMax(t->pRight);
	}
	return MAX;
}
int TimMax2(TREE t){
	// neu node cha khong ton tai cay con trai hay cay con phai
	if(t->pLeft==NULL & t->pRight=NULL){
		return t->data;
	}
	int max = t->data; // gan gia tri bien max
	if(t->pLeft!=NULL){
		int left = TimMax2(t->pLeft);
	}
}
int main(){
		// khoi tao cac node
	NODE *root = KhoiTaoNode(1);
	NODE *node2 = KhoiTaoNode(2);
	NODE *node3 = KhoiTaoNode(3);
	NODE *node4 = KhoiTaoNode(4);
	NODE *node5 = KhoiTaoNode(5);
	NODE *node6 = KhoiTaoNode(6);
	NODE *node7 = KhoiTaoNode(7);
	
	// them cac node vao cay
	root->pLeft = node2;
	root->pRight = node3;
	node2->pLeft = node4;
	node2->pRight = node5;
	node3->pLeft = node6;
	node3->pRight = node7;
	
	// duyet NLR
	cout<<"Duyet theo NLR: "<< endl;
	NLR(root);
	cout<<"\nMax: "<< TimMax(root);
}

