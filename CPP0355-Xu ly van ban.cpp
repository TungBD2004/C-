#include<bits/stdc++.h>

using namespace std;
string dau(string s){
	s[0]=toupper(s[0]);
	return s;
}
string thuong(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}

int main(){
	string s;
	getline(cin,s);
	vector<string> v;
	stringstream ss(s);
	string tam;
	while(ss >> tam){
		tam=thuong(tam);
		v.push_back(tam);
	}
	int ok=1;
	for(auto x:v){
		if(ok){
			x=dau(x);
			ok=0;
		}
		char a=x[x.size()-1];
		if(a == '.' || a == '!' || a == '?'){
			x.pop_back();
			cout<<x<<endl;
			ok=1;
		}
		else cout<<x<<" ";
	}
	
}
