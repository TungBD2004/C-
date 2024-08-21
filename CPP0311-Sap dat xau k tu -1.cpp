#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		map<char,int> mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		int max=0;
		for(int i=0;i<s.size();i++){
			if(mp[s[i]]>max){
				max=mp[s[i]];
			}
		}
		if(max>(s.size()+1)/2){
			cout<<"0\n";
		}
		else cout<<"1\n";
	}
	
}
