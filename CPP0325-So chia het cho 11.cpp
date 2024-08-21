#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int chan=0;
		int le=0;
		for(int i=0;i<s.size();i+=2){
			chan+=s[i]-'0';
		}
		for(int i=1;i<s.size();i+=2){
			le+=s[i]-'0';
		}
		if(abs(chan-le)%11==0){
			cout<<"1\n";
		}
		else cout<<"0\n";
	}
}
