#include<iostream>
using namespace std;
void P3();
class FruitSeller {
public:
	void ShowSalesResult();
	FruitSeller(int a, int n, int p);
	int apple_price; //��� ����
	int apple_n; //��� ���� ����
	int seller_prpt; //�Ǹ��� �����ݾ�
};
FruitSeller::FruitSeller(int a, int n, int p) {
	apple_price = a;
	apple_n = n;
	seller_prpt = p;
}
void FruitSeller::ShowSalesResult() {
	cout << "���� ��� : " << apple_n << endl;
	cout << "�Ǹ� ���� : " << seller_prpt << endl << endl;
}

class FruitBuyer {
public:
	void BuyApples(FruitSeller &seller, int n);
	void ShowBuyResult();
	FruitBuyer(int m, int t) {
		buyer_m = m;
		buyer_h = t;
	}
private:
	int buyer_m; //������ �ܾ�
	int buyer_h; //������ ��� ���� ����
};
void FruitBuyer::BuyApples(FruitSeller &seller, int n) { //
	buyer_m -= n;
	buyer_h = n / seller.apple_price;
	seller.apple_n -= buyer_h;
	seller.seller_prpt += n;
}
void FruitBuyer::ShowBuyResult() {
	cout << "���� �ܾ� : " << buyer_m << endl;
	cout << "��� ���� : " << buyer_h << endl;
}
void P3() {
	FruitSeller seller(1000, 20, 0); //�Ǹ���
	FruitBuyer buyer(5000, 0); //������

	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
}
int main() {
	P3();
}