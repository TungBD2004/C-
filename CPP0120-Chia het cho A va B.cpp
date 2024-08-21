#include<iostream>

using namespace std;
int check(int n,int a,int b){
	if(n%a==0 || n%b==0)
	return 1;
	return 0;	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int dem=0;
		for(int i=m;i<=n;i++){
			if(check(i,a,b)){
				
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
