#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string ma,ten,lop,email;
		friend istream &operator >> (istream &in,SinhVien &a){
			cin>>a.ma;
			scanf("\n");
			getline(cin,a.ten);
			cin>>a.lop>>a.email;
			return in;
		}
		friend ostream &operator << (ostream &out,SinhVien a){
			cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
			return out;
		}
};
string tennganh(string s){
	if (s == "Ke toan") return "KT";
    if (s == "Cong nghe thong tin") return "CN";
    if (s == "An toan thong tin") return "AT";
    if (s == "Vien thong") return "VT";
    if (s == "Dien tu") return "DT";
}
int main(){
	int n;
	cin>>n;
	SinhVien ds[1000];
	for(int i=0;i<n;i++){
		cin>>ds[i];
	}
	int q;
	cin>>q;
	while(q--){
		scanf("\n");
		string s;
		getline(cin,s);
		string tam=tennganh(s);
		for(int i=0;i<s.size();i++){
			s[i]=toupper(s[i]);
		}
		cout<<"DANH SACH SINH VIEN NGANH " << s << ":\n";
		for(int i=0;i<n;i++){
			if(tam == "CN" || tam == "AT"){
				if(tam[0] == ds[i].ma[5] && tam[1] == ds[i].ma[6] && ds[i].lop[0] != 'E'){
					cout<<ds[i];
				}
			}
			else {
				if(tam[0] == ds[i].ma[5] && tam[1] == ds[i].ma[6])
				cout<<ds[i];
			}
			
		}
		cout<<endl;
	}
}




