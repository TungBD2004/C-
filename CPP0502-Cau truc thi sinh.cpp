#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string Ten;
	string date;
	float diem1;
	float diem2;
	float diem3;
};
void nhap(ThiSinh &p){
	getline(cin,p.Ten);
	
	cin>>p.date;
	cin>>p.diem1>>p.diem2>>p.diem3;
}
void in(ThiSinh p){
	cout<<p.Ten<<" "<<p.date<<" "<<fixed<<setprecision(1)<<(p.diem1+p.diem2+p.diem3);
	
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
