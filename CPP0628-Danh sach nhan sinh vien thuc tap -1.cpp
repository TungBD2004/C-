#include<bits/stdc++.h>
using namespace std;

class TapDoan{
	public:
		string ma,ten;
		int soluong;
		
		friend istream &operator >> (istream &in,TapDoan &a){
		    scanf("\n");
			getline(cin,a.ma);
			getline(cin,a.ten);
			cin>>a.soluong;
			return in;
		}
		friend ostream &operator << (ostream &out,TapDoan a){
			cout<<a.ma<<" "<<a.ten<<" "<<a.soluong<<endl;
			return out;
		}
};
bool cmp(TapDoan a,TapDoan b){
	if(a.soluong == b.soluong){
		return a.ma<b.ma;
	}
	return a.soluong>b.soluong;
}
int main(){
	int n;
	cin>>n;
	TapDoan ds[n];
	for(int i=0;i<n;i++){
		cin>>ds[i];
	}
	sort(ds,ds+n,cmp);
	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:\n";
		for(int i=0;i<n;i++){
		    if(ds[i].soluong <=b && ds[i].soluong>=a)
		    cout<<ds[i];
    	}
	}
	
}
