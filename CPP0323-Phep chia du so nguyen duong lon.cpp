#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string n;
		cin>>n;
		long long m;
		cin>>m;
		int so=0;
		for(int i=0;i<n.size();i++){
			so*=10;
			so+=n[i]-'0';
			so%=m;
		}
		cout<<so<<endl;
	}
	
	
}
