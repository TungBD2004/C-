#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		long long max=0;
		long long dem=0;
		long long so=0;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				so=so*10+s[i]-'0';
			}
			else{
				dem+=so;
				if(max<dem){
					max=dem;
					dem=0;
				}
				so=0;
			}
		}
		if(isdigit(s[s.size()-1])){
			dem+=so;
		}
		if(dem>max){
			max=dem;
		}
		
		cout<<max<<endl;
	}
	
}
