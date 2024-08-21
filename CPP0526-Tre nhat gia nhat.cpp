#include<bits/stdc++.h>
using namespace std;

struct nguoi{
	string ten;
	int m,d,y;
};
void nhap(nguoi a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i].ten;
		scanf("%d/%d/%d",&a[i].d,&a[i].m,&a[i].y);
	}
}
bool cmp(nguoi a,nguoi b){
	if(a.y>b.y)
	return 1;
	if(a.y == b.y){
		if(a.m > b.m){
			return 1;
		}
		if(a.m == b.m){
			if(a.d>b.d){
				return 1;
			}
		}
	}
	return 0;
}
void sapxep(nguoi a[],int n){
	sort(a,a+n,cmp);
}
void in(nguoi a[],int n){
	cout<<a[0].ten<<endl<<a[n-1].ten;
}
int main(){
	int n;
	cin>>n;
	nguoi ds[100];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
}

