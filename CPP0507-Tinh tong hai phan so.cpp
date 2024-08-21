#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll UCLN(ll a,ll b){
	if(b==0){
		return a;
	}
	return UCLN(b,a%b);
}
ll BCNN(ll a,ll b){
	ll c=a*b;
	return c/UCLN(a,b);
}

struct PhanSo{
	ll tu,mau;	
};
void nhap(PhanSo &p){
	cin>>p.tu>>p.mau;
}
void in(PhanSo p){
	cout<<p.tu<<"/"<<p.mau;
}
void toigian(PhanSo &p){
	ll x=UCLN(p.tu,p.mau);
	p.tu/=x;
	p.mau/=x;
}
PhanSo tong(PhanSo p, PhanSo q){
	ll msc=BCNN(p.mau,q.mau);
	p.tu=msc/p.mau*p.tu;	
	q.tu=msc/q.mau*q.tu;
	p.tu+=q.tu;
	p.mau=msc;
	toigian(p);
	return p;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
