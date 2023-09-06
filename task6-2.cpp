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
Box::Box() { //����Ʈ ������
	w = 1;
	h = 1;
	v_h = 1;
}
Box::Box(int wide, int high, int v_high) { //�Ű������� �ִ� ������
	w = wide;
	h = high;
	v_h = v_high;
}
int Box::getVolume() {
	return w * h * v_h;
}
void Box::print() {
	cout << "�ظ��� : " << w * h << "  " << "���� ���� : " << v_h <<"  "<< " ���� : " << w * h * v_h << endl;
}
void p2() {
	Box b1(2, 3, 4), b2(4, 5, 6);
	Box b3;  // �Ű����� ���� ��� w=1, h=1, v_h=1 ���� ����
	cout << "========================================" << endl;
	cout << "�ڽ� 1 ";
	b1.print();
	cout << "�ڽ� 2 ";
	b2.print();
	cout << "�ڽ� 3 ";
	b3.print();
	cout << "========================================" << endl;
	int vb1 = b1.getVolume();
	int vb2 = b2.getVolume();
	int vb3 = b3.getVolume();
	int result = (vb1 > vb2) && (vb1 > vb3) ? vb1 : (vb2 > vb3) ? vb2 : vb3;
	if (result == vb1) cout << "�ڽ�1�� ���ǰ� ���� Ů�ϴ� : " << vb1;
	else if (result == vb2) cout << "�ڽ�2�� ���ǰ� ���� Ů�ϴ� : " << vb2;
	else if (result == vb3) cout << "�ڽ�3�� ���ǰ� ���� Ů�ϴ� : " << vb3;
}
int main() {
	p2();
	return 0;
}