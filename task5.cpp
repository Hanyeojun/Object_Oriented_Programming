#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void P3();
void P6();

class Dice {
private:
	int face;
public:
	void roll() {
		face = (int)(rand() % 6 + 1);
	}
	int getFace() {
		return face;
	}
};

class Complex {
public:
	void setComplex(double r, double i) {
		real = r;
		img = i;
	}
	void Print() {
		if (img > 0) cout << real << "+" << img << "i" << '\n';
		else cout << real << img << "i" << '\n';
	}
	void Add(double r1, double r2, double i1, double i2) {
		real = r1 + r2;
		img = i1 + i2;
	}
	void Sub(double r1, double r2, double i1, double i2) {
		real = r1 - r2;
		img = i1 - i2;
	}
private:
	double real;
	double img;
};

void P3() {
	Dice D1 = {};
	int n = 0;
	cout << "�ֻ����� ���� Ƚ�� �Է� : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		D1.roll();
		cout << "�ֻ����� ���ڴ�" << D1.getFace() << "�Դϴ�\n";
	}
}

void P6() {
	double r1, i1, r2, i2;
	Complex c1={}, c2={}, c3={};
	cout << "1��° �Ǽ��ο� ����θ� �Է��ϼ��� :";	
	cin >> r1 >> i1;
	cout << "2��° �Ǽ��ο� ����θ� �Է��ϼ��� :";	
	cin >> r2 >> i2;
	cout << "===================================" << endl;
	c1.setComplex(r1, i1);
	cout << "���Ҽ��� : ";		
	c1.Print();
	c2.setComplex(r2, i2);
	cout << "���Ҽ��� : ";		
	c2.Print();

	c3.Add(r1, r2, i1, i2);		
	cout << "���� : ";		
	c3.Print();
	c3.Sub(r1, r2, i1, i2);		
	cout << "������ : ";		
	c3.Print();
	cout << "===================================" << endl;
}

int main() {
	P3();
	P6();
}