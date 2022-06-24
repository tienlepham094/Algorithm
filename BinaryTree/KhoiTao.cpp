#include <iostream>
using namespace std;

// de bai: nhap vao cay nhi phan cac so nguyen. Xuat ra man hinh cac ptu cua cay nhi phan
struct node {
	int data; // du lieu ma node luu tru
	struct node *pLeft; // node lien ket ben trai cau cay => cay con trái
	struct node *pRight; // node lien ket ben phaoi cua cay => cay con pha
};
typedef node Node;
typedef Node *TREE; // con tro TREE kieu NODE
// khoi tao node
Node * KhoiTaoNode(int x){
	Node *p = new Node;
	p->data = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
// khoi tao cay
void KhoiTaoCay(TREE &root){
	root = NULL;// cay rong
}
// them phan tu x vao cay
void ThemNode(TREE &root, Node *node){
//	Node *node = KhoiTaoNode(value);
	if(root){
		if(root->data == node->data) return;
		else if(node->data< root->data) ThemNode(root->pLeft, node);
		else ThemNode(root->pRight, node);
	}
	else
		root = node;// da tim duoc vi tri thích hop
}
// ham duyet cay
// Nlr
void NLR(TREE t){
	if(t!=NULL){
		cout<<t->data<<" ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

// NRL
void NRL(TREE t){
	if(t!=NULL){
		cout<<t->data<<" ";
		NRL(t->pRight);
		NRL(t->pLeft);
	}
}
int main (){
	// khoi tao cac node
	Node *root = KhoiTaoNode(1);
	Node *node2 = KhoiTaoNode(2);
	Node *node3 = KhoiTaoNode(3);
	Node *node4 = KhoiTaoNode(4);
	Node *node5 = KhoiTaoNode(5);
	Node *node6 = KhoiTaoNode(6);
	Node *node7 = KhoiTaoNode(7);
	
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
	
	// them phan tu vao cay
	Node *nodeAdd = KhoiTaoNode(8);
	ThemNode(root, nodeAdd);
	cout<<"\nCay sau khi them duyet theo NLR:"<< endl;
	NLR(root);
}
