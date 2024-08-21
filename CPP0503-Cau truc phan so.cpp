#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a,long long b){
	if(b==0){
		return a;
	}
	else return UCLN(b,a%b);
}


struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &p){
	cin>>p.tu>>p.mau;
}
void rutgon(PhanSo &p){
	long long Uoc=UCLN(p.tu,p.mau);
	p.tu/=Uoc;
	p.mau/=Uoc;
}
void in(PhanSo p){
	cout<<p.tu<<"/"<<p.mau<<endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
