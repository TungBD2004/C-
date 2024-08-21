#include<bits/stdc++.h>

using namespace std;

string inthuong(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);	
	}
	return s;	
}
bool check(string s){
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l] != s[r]){
			return false;
		}
		l++,r--;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		cin>>a;
		a=inthuong(a);
		for(int i = 0 ; i < a.size() ; i++){ 
		if(a[i] == 'a' || a[i] == 'b' || a[i] == 'c' ) a[i] = '2'; 
		else if(a[i] == 'd' || a[i] == 'e' || a[i] == 'f' ) a[i] = '3'; 
		else if(a[i] == 'g' || a[i] == 'h' || a[i] == 'i' ) a[i] = '4'; 
		else if(a[i] == 'j' || a[i] == 'k' || a[i] == 'l' ) a[i] = '5'; 
		else if(a[i] == 'm' || a[i] == 'n' || a[i] == 'o' ) a[i] = '6'; 
		else if(a[i] == 'p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's') a[i] = '7'; 
		else if(a[i] == 't' || a[i] == 'u' || a[i] == 'v' ) a[i] = '8'; 
		else if(a[i] == 'w' || a[i] == 'x' || a[i] == 'y' || a[i] == 'z') a[i] = '9'; 
		}
	
		if(check(a) == true){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	
	
}
