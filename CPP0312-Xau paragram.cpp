#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		map<char,int> mp;
		string s;
		getline(cin,s);
		int k;
		cin>>k;
		cin.ignore();
		int dem=0;
		for(int i=0;i<s.size();i++){
			mp[s[i]]=1;
		}
		for(auto it:mp){
			if(it.second==1){
				dem++;
			}
		}
		if(k>=26-dem){
			cout<<"1\n";
		}
		else cout<<"0\n";
	}
}
