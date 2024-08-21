#include<iostream>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m],b[n*m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int tren=0,duoi=n-1,trai=0,phai=m-1;
		int x=0;
		while(tren<=duoi && trai<=phai){
			for(int i=trai;i<=phai;i++){
				b[x++]=a[tren][i];
			}
			tren++;
			for(int i=tren;i<=duoi;i++){
				b[x++]=a[i][phai];
			}
			phai--;
			if(trai<=phai){
				for(int i=phai;i>=trai;i--){
					b[x++]=a[duoi][i];
				}
				duoi--;
			}
			if(tren<=duoi){
				for(int i=duoi;i>=tren;i--){
					b[x++]=a[i][trai];
				}
				trai++;
			}
				
		}
		for(int i=m*n-1;i>=0;i--){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	
}
