#include<bits/stdc++.h>
using namespace std;

#define a() a
class SinhVien{
	private:
		string ma,ten,ns,lop;
		double gpa;
	public:
		SinhVien(){
			lop=ten=ns="";
			gpa=0;
		}
		friend istream& operator >> (istream& , SinhVien&);
		friend ostream& operator << (ostream& , SinhVien);
};

istream& operator >> (istream& in , SinhVien& a){
	a.ma="B20DCCN001";
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[2] != '/'){
		a.ns="0"+a.ns;
	}
	if(a.ns[5]!='/'){
		a.ns.insert(3,"0");
	}	
	return in;
}
ostream& operator << (ostream& out , SinhVien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
