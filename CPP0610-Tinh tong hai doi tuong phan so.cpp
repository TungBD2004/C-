#include<bits/stdc++.h>
using namespace std;

using ll=long long;
ll UCLN(ll a,ll b){
	if(b==0)
	return a;
	return UCLN(b,a%b);
}
class PhanSo{
	public:
		ll tu,mau;
		PhanSo(ll t,ll m){
			tu=t;
			mau=m;
		}
		friend istream &operator >> (istream &in,PhanSo &a){
			in>>a.tu>>a.mau;
			return in;
		}
		friend ostream &operator << (ostream &out,PhanSo a){
			cout<<a.tu<<"/"<<a.mau;
			return out;
		}
		void rutgon(){
			ll u=UCLN(tu,mau);
			tu/=u;
			mau/=u;
		}
		friend PhanSo operator +(PhanSo a, PhanSo b){
			PhanSo c(1,1);
			c.tu=a.tu*b.mau+a.mau*b.tu;
        	c.mau = a.mau * b.mau;
        	c.rutgon();
        	return c;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
