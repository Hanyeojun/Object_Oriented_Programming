#include<iostream>
using namespace std;
void p2();
class Box {
private:
	int w, h, v_h;
public:
	int getVolume();
	void print();
	Box();
	Box(int wide, int high, int v_high);
};
Box::Box() { //디폴트 생성자
	w = 1;
	h = 1;
	v_h = 1;
}
Box::Box(int wide, int high, int v_high) { //매개변수가 있는 생성자
	w = wide;
	h = high;
	v_h = v_high;
}
int Box::getVolume() {
	return w * h * v_h;
}
void Box::print() {
	cout << "밑면적 : " << w * h << "  " << "상자 높이 : " << v_h <<"  "<< " 부피 : " << w * h * v_h << endl;
}
void p2() {
	Box b1(2, 3, 4), b2(4, 5, 6);
	Box b3;  // 매개변수 없는 경우 w=1, h=1, v_h=1 으로 지정
	cout << "========================================" << endl;
	cout << "박스 1 ";
	b1.print();
	cout << "박스 2 ";
	b2.print();
	cout << "박스 3 ";
	b3.print();
	cout << "========================================" << endl;
	int vb1 = b1.getVolume();
	int vb2 = b2.getVolume();
	int vb3 = b3.getVolume();
	int result = (vb1 > vb2) && (vb1 > vb3) ? vb1 : (vb2 > vb3) ? vb2 : vb3;
	if (result == vb1) cout << "박스1의 부피가 가장 큽니다 : " << vb1;
	else if (result == vb2) cout << "박스2의 부피가 가장 큽니다 : " << vb2;
	else if (result == vb3) cout << "박스3의 부피가 가장 큽니다 : " << vb3;
}
int main() {
	p2();
	return 0;
}