#include<bits/stdc++.h> 
using namespace std;

int UCLN(int a,int b){
	if(b==0)
	return a;
	return UCLN(b,a%b);
}
int nt(int n){
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int dem=0;
		for(int i=1;i<=x;i++){
			if(UCLN(i,x)==1){
				dem++;
			}
		}
		if(nt(dem)){
			cout<<"1\n";
		}
		else cout<<"0\n";
	}
}
