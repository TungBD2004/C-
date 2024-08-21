#include<bits/stdc++.h>

using namespace std;

int tn(string s){
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			return 0;
		}	
		l++,r--;
	}
	return 1;
}
int sochan(string s){
	for(int i=0;i<s.size();i++){
		if((s[i]-'0')%2==1){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(sochan(s) && tn(s)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
