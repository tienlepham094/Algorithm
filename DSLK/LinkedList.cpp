#include <iostream>
using namespace std;

// class node
struct Node{
	int data; // du lieu cua node
	Node *next; // dia chi cua node tiep theo trong dslk
};

// con tro kieu node
typedef struct Node* node; // moi lan khai bao node trong dslk chi can dung node

//cap phat dong mot node voi du lieu la so nguyen x
node makeNode(int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp;
}

//kiem tra do rong cua dslk
int Size(node a){
	int cnt= 0;
	while(a!=NULL){
		++cnt;
		a = a -> next; // gan dia chi cua node tiep theo cho node hien tai
	}
	return cnt;
}

// them 1 phan tu vao dau dslk
void insertFirst(node &a, int x){ // truyen tham chieu
		node tmp = makeNode(x);
		if(a==NULL){
			a = tmp;
		}
		else{
			// next cua tmp phai tro vao a
			tmp->next = a;
			a = tmp;
		}
}

// them phan tu vao cuoi danh sach
void insertLast(node &a, int x){
	node tmp = makeNode(x);
	if(a==NULL){
		a = tmp;
	}else {
		node p = a; // khong duyet truc tiep tu a
		while(p->next!=NULL){
			p=p->next;
		}
		p->next = tmp;

	}
}
// them mot phan tu o giua
void insertMiddle(node &a, int x, int pos){
	int n = Size(a);
	if(pos<=0||pos>n+1){
		cout<<"Vi tri chen khong hop le"<< endl;
		return ;
	}
	if(pos==n) {
		insertLast(a, x);
		return ;
	}
	if(pos==1){
		insertFirst(a,x);
		return ;
	}
	node p=a;
	for(int i=1; i< pos-1; i++){
		p = p->next;
	}
	node tmp = makeNode(x);
	// lam dung thu tu
	tmp->next= p->next;
	p->next = tmp;
}

// xoa phan tu o dau
void deleteFirst(node &a){
	if(a == NULL) return ;
	a = a-> next; // gan phan tu o dau vao node tiep theo
}

// xoa phan tu o cuoi
void deleteLast(node &a){
	if(a==NULL) return ;
	node truoc = NULL, sau=a;
	while(sau->next!=NULL){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = NULL;
	}else {
		truoc -> next = NULL;
	}
}
// xoa phan tu o vi tri bat ki
void deleteMiddle(node &a, int pos){
	if(pos<=0 || pos> Size(a)) return ;
	node truoc = NULL, sau = a;
	for(int i = 1; i< pos; i++){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = a->next;
	}
	else {
		truoc->next = sau->next;
	}
}
void print(node a){
	cout << "---------------------------------------\n";
	while(a!=NULL){
		cout << a->data<<" ";
		a = a->next;
	}
	cout<< endl;
	cout<< "----------------------------------------\n";
}
int main(){
	node head = NULL;
	while(1){
		cout<<"1. Chen phan tu vao dau danh sach"<< endl;
		cout<<"2. Chen phan tu vao cuoi danh sach"<< endl;
		cout<<"3. Chen phan tu vao giua danh sach"<< endl;
		cout<<"4. Xoa phan tu o dau danh sach"<< endl;
		cout<<"5. Xoa phan tu o cuoi danh sach"<< endl;
		cout<<"6. Xoa phan tu o giua danh sach"<<endl;
		cout<<"7.In danh sach"<< endl;
		
		cout<<"Nhap lua chon: " << endl;
		int lc; 
		cin>>lc;
		if(lc == 1){
			int x;
			cout<<"Nhap gia tri can chen"<<endl;
			cin>>x;
			insertFirst(head,x);
		}
		else if(lc==2){
			int x;
			cout<<"Nhap gia tri can chen"<<endl;
			cin>>x;
			insertLast(head,x);
		}
		else if(lc==7){
			print(head);
		}
	}
}
