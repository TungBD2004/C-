#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		long long dem=0;
		long long so=0;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				so=so*10+s[i]-'0';
			}
			else{
				dem+=so;
				so=0;
			}
				
		}
		if(isdigit(s[s.size()-1])){
					dem+=so;
				}	
	
		cout<<dem<<endl;
		
	}
	
	
}
