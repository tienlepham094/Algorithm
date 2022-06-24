#include <stdio.h>
using namespace std;

struct Student{
	string name, id;
	double gpa;
};
struct SV {
	Student s;
	SV *next;
};
typedef struct SV* sv;
sv makeNode(int x){
	Student s;
	cout<<"Nhap thong tin sinh vien: "<<endl;
	cout<<"Nhap ID: "; cin>>s.id;
	cout<<"Nhap ten: "; cin>>ignore();
	getline(cin, s.name);
	cout<<"Nhap gpa: "; cin>>s.gpa;
	
	sv temp = new SV();
	temp->s = s;
	temp->next = NULL;
	return tmp;
}
