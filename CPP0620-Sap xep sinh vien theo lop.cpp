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
bool cmp(SinhVien a,SinhVien b){
	if(a.lop==b.lop){
		return a.ma<b.ma;
	}
	else 
	return a.lop <b.lop;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
	int n;
	cin>>n;
	SinhVien ds[1000];
	for(int i=0;i<n;i++){
		nhap(ds[i]);
	}
	sapxep(ds,n);
	for(int i=0;i<n;i++){
		in(ds[i]);
	}
}
