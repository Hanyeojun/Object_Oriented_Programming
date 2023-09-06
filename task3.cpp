#include<iostream>
#include<cmath>
using namespace std;

void P3();
void P5();
void P9();
void P11();
double calc_Avg(int input, double sum, double num[]);
double calc_Dev(int input, double sum, double dev[], double num[]);
int* sum_Row(int m[][5]);
int* sum_Col(int m[][5]);
void Copy(int* A, int* B, int n);
void get_stat(int n, double A[], double* p_avg, double* p_max, double* p_sum);

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//P3();
	cout << '\n';
	//P5();
	cout << '\n';
	P9();
	cout << '\n';
	P11();
}

void P3() {
	int input = 0;
	double num[10] = {}, dev[10] = {};
	double sum = 0;

	cout << "(P3)" << '\n' << "�Է¹��� ���� : ";
	cin >> input;
	cout << "�Ǽ��� �Է� : ";

	for (int i = 0; i < input; i++) {
		cin >> num[i];
		sum += num[i];
	}
	cout << "��� : " << calc_Avg(input, sum, num) << '\n';
	cout << "ǥ������ : " << calc_Dev(input, sum, dev, num) << '\n';
}
double calc_Avg(int input, double sum, double num[]) { //��� ���
	double avg = sum / (double)input;
	return avg;
} 
double calc_Dev(int input, double sum, double dev[], double num[]) { //ǥ������ ���
	double total = 0, variance = 0, stddeviation = 0;

	for (int i = 0; i < input; i++) {
		dev[i] = num[i] - calc_Avg(input, sum, num);
	}
	for (int i = 0; i < input; i++) {
		total += dev[i] * dev[i];
	}

	variance = total / input;
	stddeviation = sqrt(variance);

	return stddeviation;
}

void P5() {
	int m[3][5] = { {12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21} };

	cout << "(P5)" << '\n' << "���� ��" << '\n';
	int* r = sum_Row(m);
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "�� : " << r[i] << '\n';
	}
	cout << '\n' << "���� ��" << '\n';
	int* c = sum_Col(m);
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "�� : " << c[i] << '\n';
	}
}
int* sum_Row(int m[][5]) { //���� ��
	int* rsum = new int[3];
	for (int i = 0; i < 3; i++) {
		rsum[i] = 0;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			rsum[i] += m[i][j];
		}
	}
	return rsum;
}
int* sum_Col(int m[][5]) { //���� ��
	int* csum = new int[5];
	for (int i = 0; i < 5; i++) {
		csum[i] = 0;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			csum[i] += m[j][i];
		}
	}
	return csum;
}
//
//void P9() {
//	int *A, *B, n = 0;
//	cout << "(P9)"<<'\n' << "�迭�� ũ�� �Է� : ";
//	cin >> n;
//	A = new int[n];
//	B = new int[n];
//	cout << "A �Է� : ";
//	for (int i = 0; i < n; i++) {
//		cin >> A[i];
//	}
//	Copy(A, B, n);
//	cout << "����� �迭 B : ";
//	for (int i = 0; i < n; i++) {
//		cout << B[i] << " ";
//	}
//	delete[]A;
//	delete[]B;
//	cout << '\n';
//}
//void Copy(int* A, int* B, int n) { //�迭 ����
//	for (int i = 0; i < n; i++) {
//		B[i] = A[i];
//	}
//}

void P9()
{
	int* A, * B, n;
	cin >> n;
	A = new int[n];
	B = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	copy(A, B, n);
}

void copy(int* A, int* B, int n) {
	int* tmp = NULL;
	*tmp = *A;
	*A = *B;
	*B = *tmp;
	for (int i = 0; i < n; i++)
	{
		cout << tmp[i] << " " << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " " << endl;
	}
}














void P11() {
	int n;
	cout << "(P11)" <<'\n' << "�迭�� ũ�� �Է� : ";
	cin >> n;
	double* A = new double[n];
	cout << "A �Է� : ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	double p_avg, p_max, p_sum;
	get_stat(n, A, &p_avg, &p_max, &p_sum);
	cout << "�迭 A�� ��� : " << p_avg << ", " << "�迭 A�� �ִ밪 : " << p_max << ", " << "�迭 A�� ���� : " << p_sum << '\n';
	delete[]A;
}
void get_stat(int n, double A[], double* p_avg, double* p_max, double* p_sum) { // ���, �ִ밪, ���� ���
	double sum = 0, max = 0;
	for (int i = 0; i < n; i++) {
		sum += A[i];
		if (A[i] > max) max = A[i];
	}
	*p_avg = sum / n;
	*p_max = max;
	*p_sum = sum;

}