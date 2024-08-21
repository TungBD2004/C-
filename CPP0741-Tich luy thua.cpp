#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		long long p;
		cin>>x>>y>>p;
		long long res=1;
		for(int i=1;i<=y;i++){
			res*=x;
			res%=p;
		}
		cout<<res<<endl;
	}
}

