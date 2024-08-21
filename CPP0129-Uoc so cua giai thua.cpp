#include <bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int dem=0;
		
		for(int i=2;i<=n;i++){
			int tam=i;
			while(tam%p==0){
				dem++;
				tam/=p;
			}
		}
		cout<<dem<<endl;
	}
	
}
