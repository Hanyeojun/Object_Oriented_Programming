#include<iostream>
#include<cmath>
using namespace std;
double dist_2d();
void quad_eqn();
void P9();
void P10();

void main() {
	P9();
	P10();
}

double dist_2d(double x1, double x2, double y1, double y2) {
	double d = 0;
	cout << "값 입력( x1, y1, x2, y2 )\n";
	cin >> x1 >> y1 >> x2 >> y2;
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return d;
}
void P9() {
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	cout << dist_2d(x1, x2, y1, y2) << '\n';
}

void quad_eqn() {
	double a, b, c, d, x, y;
	cout << "2차 방정식의 계수를 입력하시오.(press enter)\n";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d > 0) {
		x = (-b + sqrt(d)) / 2 * a;
		y = (-b - sqrt(d)) / 2 * a;
		cout << "근은 " << x << "와(과) " << y << "입니다.";
	}
	else if (d == 0) {
		x = b / (-2 * a);
		cout << "근은 " << x << "입니다.";
	}
	else cout << "근이 없습니다";
}
void P10() {
	quad_eqn();
}