#include<bits/stdc++.h>
using namespace std;
int so=1;

struct NhanVien{
	string STT;
	string ten,gt,dc,mst,date;
	int d,m,y;
};

bool cmp(NhanVien a,NhanVien b){
	if(a.y<b.y){
		return 1;
	}
	if(a.y==b.y){
		if(a.m<b.m){
			return 1;
		}
		if(a.m==b.m){
			if(a.d<b.d){
				return 1;
			}
		}
	}
	return 0;
	
}
void nhap(NhanVien &a){
	a.STT=to_string(so);
	while(a.STT.size()<5){
		a.STT="0"+a.STT;
	}
	so++;
	cin.ignore();
	getline(cin,a.ten);
	getline(cin,a.gt);
	scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);
	
	getline(cin,a.dc);
	cin>>a.mst>>a.date;
}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,cmp);
}
void inds(NhanVien a[],int n){
	for(int i=0;i<n;i++){
	cout<<a[i].STT<<" "<<a[i].ten<<" "<<a[i].gt<<" ";
	if(a[i].m<10){
		cout<<"0";
	}
	cout<<a[i].m<<"/";
	if(a[i].d<10){
		cout<<"0";
	}
	cout<<a[i].d<<"/"<<a[i].y<<" ";
	cout<<a[i].dc<<" "<<a[i].mst<<" "<<a[i].date<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
