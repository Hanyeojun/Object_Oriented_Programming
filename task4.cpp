#include<iostream>
#include<string>
using namespace std;
void P8();
void P9();
void P13();

void main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	P8();
	P9();
	P13();
}

void P8() {
	string str;
	int alp = 0, num = 0, gap = 0;
	cout << "(P8) ���ڿ� �Է� : ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) alp++;
		else if (str[i] >= '1' && str[i] <= '9') num++;
		else if (str[i] == ' ') gap++;
	}
	cout << "���ĺ� ���� : " << alp << ", " << "���� ���� : " << num << ", " << "���� ���� : " << gap << '\n';
}

void P9() {
	int cnt = 1;
	string s;
	cout << "(P9) ���ڿ� �Է� : ";
	getline(cin, s);
	if (s[0] == ' ') cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') cnt++;
	}
	if (s[s.length() - 1] == ' ') cnt--;
	cout << "�ܾ��� ���� : " << cnt << '\n';
}

void P13() {
	string str, findstr, cngstr;
	cout << "(P13) ���ڿ� �Է� : ";
	getline(cin, str);
	cout << "ã�� ���� ���ڿ� : ";
	cin >> findstr;
	cout << "�ٲٰ� ���� ���ڿ� : ";
	cin >> cngstr;
	cout << "��� : ";
	if (str.find(findstr) != string::npos) {
		str.replace(str.find(findstr), findstr.length(), cngstr);
		cout << str;
	}
	else cout << "ã�� ���ڿ��� �����ϴ�";
}