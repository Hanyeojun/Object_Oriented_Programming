#include<iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}
	int out_year() { return year; }
	int out_month() { return month; }
	int out_day() { return day; }
};

class Employee {
private:
	string name;
	Date birthDate;
	Date hireDate;
public:
	Employee(string n, Date& birth, Date& hire):name(n),birthDate(birth),hireDate(hire){}
	void print();
};

void Employee::print() {
	cout << "직원의 이름 : " << name << '\n';
	cout << "직원의 생일 : " << birthDate.out_year() << "년" << birthDate.out_month() << "월" << birthDate.out_day() << "일" << '\n';
	cout << "직원의 입사일 : " << hireDate.out_year() << "년" << hireDate.out_month() << "월" << hireDate.out_day() << "일" << '\n';
}

int main() {
	Date bir(1987, 4, 27);
	Date hir(2011, 2, 05);
	Employee emp("홍길동", bir, hir);
	emp.print();
	return 0;
}