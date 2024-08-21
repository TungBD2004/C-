#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string maSV,ten,lop,ngaysinh;
	float GPA;
};
void nhap(SinhVien &p){
	p.maSV="B20DCCN001";
	getline(cin,p.ten);
	cin>>p.lop;
	cin>>p.ngaysinh;
	cin>>p.GPA;
	if(p.ngaysinh[1] == '/'){
		p.ngaysinh="0"+p.ngaysinh;
	}
	if(p.ngaysinh[4] == '/'){
		p.ngaysinh.insert(3,"0");
	}
	
}
void in(SinhVien p){
	cout<<p.maSV<<" "<<p.ten<<" "<<p.lop<<" "<<p.ngaysinh<<" "<<fixed<<setprecision(2)<<p.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
