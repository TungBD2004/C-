#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ma="N20DCCN001";
	string ten,lop,ns;	
	float GPA;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.ten);
	cin>>a.lop>>a.ns>>a.GPA;
	
}
void inThongTinSV(SinhVien a){
	if(a.ns[1] == '/'){
		a.ns="0"+a.ns;
	}
	if(a.ns[4] == '/'){
		a.ns.insert(3,"0");
	}
	
	cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.GPA;	
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
