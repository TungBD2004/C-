#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	int dem=0;
	for(int i=0;i<n;i++){
		int s1=0,s2=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==1){
				s1++;
			}
			else s2++;
		}
		if(s1>s2){
			dem++;
		}	
	}
	cout<<dem;
}
