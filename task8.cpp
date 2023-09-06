#include<iostream>
using namespace std;
void p8_1();
void p8_2();

class Gate {
protected:
	bool x, y, z;
public:
	void inputSet(bool xx, bool yy) {
		x = xx;
		y = yy;
	}
};

class ANDGate : public Gate {
public:
	ANDGate() {
		x = false;
		y = false;
	}
	void op() {
		if (x && y) z = true;
		else z = false;
		cout << "AND input : " << x << " " << y << "->" << " " << z << '\n';
	}
};

class ORGate : public Gate {
public:
	ORGate() {
		x = false;
		y = false;
	}
	void op() {
		if (x || y) z = true;
		else z = false;
		cout<<"OR input : " << x << " " << y << "->" << " " << z << '\n';
	}
};

class XORGate : public Gate {
public:
	XORGate() {
		x = false;
		y = false;
	}
	void op() {
		if (x ^ y) z = true;
		else z = false;
		cout << "XOR input : " << x << " " << y << "->" << " " << z << '\n';
	}
};

class Point {
private:
	int x, y;
public:
	Point(int xx, int yy) :x(xx), y(yy) {}
	int GetX() { return x; }
	int GetY() { return y; }
};

class Shape { 
protected:
	Point p1, p2;
	Shape(int x1,int y1, int x2, int y2):p1(x1,y1),p2(x2,y2){}
	void print() {
		cout << p1.GetX() << " " << p1.GetY() << " " << p2.GetX() << " " << p2.GetY() << " ";
	}
};

class Line :public Shape {
public:
	Line(int x1, int y1, int x2, int y2):Shape(x1,y1,x2,y2){}

	void Draw() {
		print();
		cout <<"직선 그린다\n";
	}
};

class Circle :public Shape {
public:
	Circle(int x1,int y1,int x2,int y2):Shape(x1, y1, x2, y2) {}

	void Draw() {
		print();
		cout << "원 그린다\n";
	}
};

int main() {
	p8_1();
	//p8_2();
}

void p8_1() {
	ANDGate And;
	ORGate Or;
	XORGate Xor;

	And.inputSet(true, false);
	And.op();
	And.inputSet(true, true);
	And.op();

	Or.inputSet(true, false);
	Or.op();
	Or.inputSet(true, true);
	Or.op();

	Xor.inputSet(true, false);
	Xor.op();
	Xor.inputSet(true, true);
	Xor.op();
}

void p8_2() {
	Circle a(1, 1, 5, 5);
	Line b(5, 5, 9, 9);
	a.Draw();
	b.Draw();
}