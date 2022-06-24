# include <iostream>
using namespace std;

// Bài toán: Nhap danh sách liên ket các so nguyên

//--------- khai báo cau truc cua 1 cai node--------
struct node {
	int data; // du lieu chua trong 1 cai node
	struct node *pNext; // con tro dung de lien ket giua cac node voi nhau
};
typedef struct node NODE; // thay the struct node thanh NODE

//--------- khai bao cau trcu dslk don-------------
struct list{
	NODE *pHead; // node quan ly dau danh sach
	NODE *pTail; // node quan ly cuoi dsach
};
typedef struct list LIST; // thay the struct list thành LIST


//=========== KHOI TAO CAU TRUC DSLK DON==========
void KhoiTao(LIST &l){
	l.pHead = NULL;
	l.pTail=NULL;
}

// hàm khoi tao mot cái node
NODE *KhoiTaoNODE(int x){
	NODE *p = new NODE; // cap phát vung nho cho node p
	if(p==NULL) cout<<"\nKhong du bo nho de cap phat";
	
	p->data = x; // truyen gia tri x vao trong data
	p->pNext = NULL;
	
	return p;
}

// ham them node vao dau ds lien ket
void ThemVaoDau(LIST &l, NODE *p){
	// dsach rong
	if(l.pHead == NULL){
		l.pHead = l.pTail = p; // node dau cung chinh la node cuoi va la p
	}
	else {
		p->pNext= l.pHead;// cho con tro cua node can them lien ket den node dau
		l.pHead = p; // cap nhat lai pHead chinh la node p
		
	}
}

// ham them node vao cuoi ds lien ket
void ThemVaoCuoi(LIST &l, NODE *p){
	// dsach dang rong
	if(l.pHead == NULL){
		l.pHead = l.pTail = p;
	}else{
		l.pTail-> pNext = p; // cho con tro cua pTail lien ket voi node p
		l.pTail = p; // cap nhat lai p la node pTail
	}
}

// ham in danh sach 
void XuatDanhSach(LIST l){
	if(l.pHead != NULL){
		NODE *node = l.pHead;
		while(node!=NULL){
			cout<< node->data<< " ";
			node = node->pNext;
		}
	}
}
int main(){
	LIST l;
	KhoiTao(l);// khoi tao danh sach lien ket don
	
	
	int n;
	cout << "\nNhap so luong node can them: ";
	cin >>n;
	
	
	for(int i =0; i<n; i++){
		int x;
		cout << "\nNhap gia tri so nguyen: ";
		cin >> x;
		NODE *p = KhoiTaoNODE(x); // khoi tao mot node so nguyen
		ThemVaoDau(l,p); // them node p vao dau danh sach lien ket
		
	}
	XuatDanhSach(l);
}
