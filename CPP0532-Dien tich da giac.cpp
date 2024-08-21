#include<bits/stdc++.h>
using namespace std;

class ToaDo{
	public:
		double x,y;
};
void nhap(ToaDo &a){
	cin>>a.x>>a.y;
}
double tinh(ToaDo a,ToaDo b){
	return (a.x*b.y - a.y*b.x);
}
double Xuly(ToaDo ds[],int n){
	double s=0;
	for(int i=0;i<n;i++){
		s += tinh(ds[i],ds[i+1]);
	}
	s=abs(s)*0.5;
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ToaDo ds[n+1];
		for(int i=0;i<n;i++){
			nhap(ds[i]);
		}
		ds[n]=ds[0];
		cout<<fixed<<setprecision(3)<<Xuly(ds,n)<<endl;
	}
}
//Area(A) = 1/2 * |(x1.y2 - x2.y1) + (x2.y3 - x3.y2) + ... + (xn.y1 - x1.yn)|
