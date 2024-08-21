#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		string s1;
		int dem=0;
		sort(s.begin(),s.end());
		for(int i=0;i<s.size();i++){
			if(!isdigit(s[i])){
				cout<<s[i];
			}
			else{
				dem+=s[i]-'0';
			}
			
		}
		
		cout<<dem<<endl;
	}
	
}
