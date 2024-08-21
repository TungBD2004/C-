#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
	string ten,diachi,gioitinh,ns,date;
	string mst;	
	string maNV="00001";
};
void nhap(NhanVien &a){
	getline(cin,a.ten);
	cin>>a.gioitinh>>a.ns;
	cin.ignore();
	getline(cin,a.diachi);
	cin>>a.mst>>a.date;
}
void in(NhanVien a){
	cout<<a.maNV<<" "<<a.ten<<" "<<a.gioitinh<<" "<<a.ns<<" "<<a.diachi<<" "<<a.mst<<" "<<a.date;
}


int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
