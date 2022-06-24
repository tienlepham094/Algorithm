// struct la tap hop cac loai du lieu khac nhau, tuong tu nhu class
#include <iostream>
using namespace std;

// struct structure_name{
// khai bao thanh vien
// }
struct Rectangle {
	int width, height;
};
// su dung phuong thuc va constuctor trong struct
struct Rectangle{
	int width, height;
	Rectangle(int w, int h){
		width = w;
		height = h;
		
	}
	void areaOfRectangle(){
		cout<< "Dien tich hinh chu nhat la : "<< (width*height)''
	}
};
int main(){
	// tao mot struct
	Rectangle rec;
	// truy cap cac thuoc tinh cua struct
	rec.width = 8;
	rec.height = 5;
	cout<< "Dien tich hinh chu nhat là : "<< (rec.width*rec.height) << endl;
	return 0;
}
