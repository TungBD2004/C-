#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		int dem=0;
		for(int i=0;i<s.size();i++){
			bool x[26]={0};
			int dem2=0;
			for(int j=i;j<s.size();j++){
				if(x[s[j] - 'a'] == 0){
					x[s[j]-'a']=1;
					dem2++;
				}
				if(dem2 == k){
					dem++;
				}
				else if(dem2 > k){
					break;
				}
			}
		}
		cout<<dem<<endl;
	}
}
