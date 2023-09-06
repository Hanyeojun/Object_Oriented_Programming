#include<iostream>
using namespace std;
void P3();
class FruitSeller {
public:
	void ShowSalesResult();
	FruitSeller(int a, int n, int p);
	int apple_price; //사과 가격
	int apple_n; //사과 소유 개수
	int seller_prpt; //판매자 소유금액
};
FruitSeller::FruitSeller(int a, int n, int p) {
	apple_price = a;
	apple_n = n;
	seller_prpt = p;
}
void FruitSeller::ShowSalesResult() {
	cout << "남은 사과 : " << apple_n << endl;
	cout << "판매 수익 : " << seller_prpt << endl << endl;
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
	int buyer_m; //구매자 잔액
	int buyer_h; //구매자 사과 소유 개수
};
void FruitBuyer::BuyApples(FruitSeller &seller, int n) { //
	buyer_m -= n;
	buyer_h = n / seller.apple_price;
	seller.apple_n -= buyer_h;
	seller.seller_prpt += n;
}
void FruitBuyer::ShowBuyResult() {
	cout << "현재 잔액 : " << buyer_m << endl;
	cout << "사과 개수 : " << buyer_h << endl;
}
void P3() {
	FruitSeller seller(1000, 20, 0); //판매자
	FruitBuyer buyer(5000, 0); //구매자

	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();

	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
}
int main() {
	P3();
}