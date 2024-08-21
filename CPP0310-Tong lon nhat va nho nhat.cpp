#include<bits/stdc++.h>

using namespace std;
using ll= long long;
ll max(string a){
	ll max=0;
	for(int i=0;i<a.size();i++){
		if(a[i] == '5'){
			a[i]='6';	
		}
		max=max*10+a[i]-'0';
	}
	return max;
}
ll min(string a){
	ll min=0;
	for(int i=0;i<a.size();i++){
		if(a[i] == '6'){
			a[i]='5';	
		}
		min=min*10+a[i]-'0';
	}
	return min;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1;
		string s2;
		cin>>s1>>s2;
		
		cout<<min(s1)+min(s2)<<" "<<max(s1)+max(s2)<<endl;
	}
	
}
