#include<bits/stdc++.h> 

using namespace std; 
int main(){
	int n;
	cin>>n;
	int a[n*n],b[n][n];
	for(int i=0;i<n*n;i++){
			cin>>a[i];
	}
	sort(a,a+n*n);
	int tren=0,duoi=n-1,trai=0,phai=n-1;
	int x=0;
	while(tren<=duoi && trai<=phai){
		for(int i=trai;i<=phai;i++){
			b[tren][i]=a[x++];
		}
		tren++;
		for(int i=tren;i<=duoi;i++){
			b[i][phai]=a[x++];
		}
		phai--;
		if(trai<=phai){
			for(int i=phai;i>=trai;i--){
				b[duoi][i]=a[x++];
			}
			duoi--;
		}
		if(tren<=duoi){
			for(int i=duoi;i>=tren;i--){
				b[i][trai]=a[x++];
			}
			trai++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
