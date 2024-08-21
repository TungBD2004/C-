#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string ma,ten,lop,email;
		
};
void nhap(SinhVien &a){
	cin>>a.ma;
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.lop>>a.email;
	
}
void in(SinhVien a){
	cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
	
}
int main(){
	int n;
	cin>>n;
	SinhVien ds[1000];
	for(int i=0;i<n;i++){
		nhap(ds[i]);
	}
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
		for(int i=0;i<n;i++){
		if (ds[i].lop[1] == s[2] && ds[i].lop[2] == s[3])
		in(ds[i]);	
		}	
	}
}
