#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string ma,ten,lop,mail;
		friend istream &operator >> (istream &in,SinhVien &a){
			in>>a.ma;
			in.ignore();
			getline(in,a.ten);
			in>>a.lop>>a.mail;
			return in;
		}
		friend ostream &operator << (ostream &out,SinhVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
			return out;
		}
		
};

bool cmp(SinhVien a,SinhVien b){
	return a.ma<b.ma;
}
void sx(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
	int n=0;
	SinhVien ds[1000],x;
	while(cin>>x){
		ds[n++]=x;
	}
	sx(ds,n);
	for(int i=0;i<n;i++){
		cout<<ds[i];
	}	
}
