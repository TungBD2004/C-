#include<bits/stdc++.h> 
using namespace std;

int n,m,a[105][105];
int dx[8]={-1,1,0,0,-1,1,-1,1},dy[8]={0,0,-1,1,-1,-1,1,1};

void tinh(int i,int j){
	a[i][j]=0;
	for(int k=0;k<8;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]){
		tinh(i1,j1);
		}
	}	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]){
					dem++;
					tinh(i,j);
				}
			}
		}
		cout<<dem<<endl;
	}
}
