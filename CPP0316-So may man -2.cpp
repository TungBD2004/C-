#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll mayman(string s){
	ll sum=0;
	for(int i=0;i<s.size();i++){
		sum+=s[i]-'0';
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(mayman(s) %9 == 0 && s!= "0"){
			cout<<"1\n";
		}
		else cout<<"0\n";
	}
	
}
