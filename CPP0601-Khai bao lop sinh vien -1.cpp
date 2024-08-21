#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma,ten,ns,lop;
		double gpa;
	public:
		SinhVien(){
			ma = ten = ns ="";
			gpa=0;
		}
		SinhVien(string ten,string lop,string ns,double gpa){
			this->ten = ten;
			this->ns = ns;
			this->gpa = gpa;
			this->lop=lop;
		}
		void nhap();
		void xuat();		
};
void SinhVien::nhap(){
	ma="B20DCCN001";
	getline(cin,ten);
	cin>>lop>>ns>>gpa;
	if(ns[2]!='/'){
		ns="0"+ns;
	}
	if(ns[5] != '/'){
		ns.insert(3,"0");
	}
}
void SinhVien::xuat(){
	cout<<ma<<" "<<ten<<" "<<lop<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
