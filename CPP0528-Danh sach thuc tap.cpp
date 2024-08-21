#include<bits/stdc++.h>
using namespace std;

int STT=1;
class SinhVien{
	public:
		int stt;
		string ma,ten,lop,email,CT;
};
void nhap(SinhVien &a){
	a.stt=STT;
	STT++;
	cin>>a.ma;
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.lop>>a.email>>a.CT;
}
void in(SinhVien a){
	cout<<a.stt<<" "<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<" "<<a.CT<<endl;
}
bool cmp(SinhVien a,SinhVien b){
	return a.ten<b.ten;
}
int main(){
	int n;
	cin>>n;
	SinhVien ds[100];
	
	for(int i=0;i<n;i++){
		nhap(ds[i]);
	}
	sort(ds,ds+n,cmp);
	int t;
	cin>>t;
	
	while(t--){
		string congty;
		cin>>congty;
		for(int i=0;i<n;i++){
			if(ds[i].CT == congty){
				in(ds[i]);
			}	
		}
	}		
}
