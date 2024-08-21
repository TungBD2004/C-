#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int chan=0,le=0;
		
		stringstream ss(s);
		string tam;
		while(ss >> tam){
			if((tam[tam.size()-1]-'0') % 2 == 0){
				chan++;
			}
			else le++;
		}
		if(((chan+le)%2==0 && chan>le) ||(chan+le)%2==1 && le>chan ){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	
	
}
