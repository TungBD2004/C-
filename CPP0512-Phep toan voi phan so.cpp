#include<bits/stdc++.h>
using namespace std;

int UCLN(int a,int b){
	if(b==0){
		return a;
	}
	return UCLN(b,a%b);
}
class PhanSo{
	public:
		int tu,mau;
};
void rutgon(PhanSo &A){
	int uoc=UCLN(A.tu,A.mau);
	A.tu=A.tu/uoc;
	A.mau=A.mau/uoc;
}
PhanSo cong(PhanSo A,PhanSo B){
	PhanSo C;
	C.tu=A.tu*B.mau+B.tu*A.mau;
	C.mau=A.mau*B.mau;
	rutgon(C);
	return C;
}

void process(PhanSo A,PhanSo B){
	PhanSo C;
	C=cong(A,B);
	C.tu*=C.tu;
	C.mau*=C.mau;
	rutgon(C);
	cout<<C.tu<<"/"<<C.mau<<" ";
	PhanSo D;
	D.tu=A.tu*B.tu*C.tu;
	D.mau=A.mau*B.mau*C.mau;
	rutgon(D);
	cout<<D.tu<<"/"<<D.mau<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
