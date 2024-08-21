#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int S=0;
		if(s[s.size()-1]=='1'){
			S++;
		}
		for(int i=1;i<s.size();i++){
			if(s[s.size()-i-1]=='1'){
				if(i%4==0){
					S+=6;
				}
				else if(i%4==1){
					S+=2;
				}
				else if(i%4==2){
					S+=4;
				}
				else if(i%4==3){
					S+=8;
				}
			}
		}
	
		if(S%5==0){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
}
