#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int dem=0;
		int a=s.size();
		for(int i=0;i<a;i++){
			if(s[i+1]-s[i]==1||s[i]-s[i+1]==1){
				dem++;
			}
		}
		if(dem==a-1){
			cout<<"YES\n";
		}
		else
		cout<<"NO\n";
		
	}
	
	
}
