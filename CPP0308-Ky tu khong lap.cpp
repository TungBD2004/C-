#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int a[100001]={};
		for(int i=0;i<s.size();i++){
			a[s[i]]++;
		}
		for(int i=0;i<s.size();i++){
			if(a[s[i]]==1){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
