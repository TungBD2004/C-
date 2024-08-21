#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int ok=0;
		if(s[n-1]-'0'==6 && s[n-2]-'0'==8){
			ok++;
		}
		if(ok>0){
			cout<<"1\n";
		}
		else cout<<"0\n";
	}
	
}
