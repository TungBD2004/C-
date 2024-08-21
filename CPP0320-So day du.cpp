#include<bits/stdc++.h>
using namespace std;

int kiemtra(string s){
	int a[10]={0};
	map<char,bool> mp;
	for(int i=0;i<s.size();i++){
		if(!isdigit(s[i]) || s[0] =='0'){
			return -1;	
			}
			else{
				mp[s[i]]=true;
			}
		}
		if(mp.size()==10){
			return 1;
		}
		return 0;	
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(kiemtra(s)	== -1){
			cout<<"INVALID\n";
		}
		else if(kiemtra(s) == 1){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}


	

