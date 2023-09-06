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
	cout << "������ �̸� : " << name << '\n';
	cout << "������ ���� : " << birthDate.out_year() << "��" << birthDate.out_month() << "��" << birthDate.out_day() << "��" << '\n';
	cout << "������ �Ի��� : " << hireDate.out_year() << "��" << hireDate.out_month() << "��" << hireDate.out_day() << "��" << '\n';
}

int main() {
	Date bir(1987, 4, 27);
	Date hir(2011, 2, 05);
	Employee emp("ȫ�浿", bir, hir);
	emp.print();
	return 0;
}