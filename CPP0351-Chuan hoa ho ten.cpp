#include<bits/stdc++.h>
using namespace std;
string chudau(string s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tam;
		vector<string> a;
		while(ss >> tam){
			chudau(tam);
			tam[0]=toupper(tam[0]);
			for(int i=1;i<tam.size();i++){
			tam[i]=tolower(tam[i]);
			}
			a.push_back(tam);
		}
		if(n==1){
			cout<<a[a.size()-1]<<" ";
			for(int i=0;i<a.size()-1;i++){
				cout<<a[i]<<" ";
			}
		}
		else if(n==2){
			for(int i=1;i<a.size();i++){
				cout<<a[i]<<" ";
			}
			cout<<a[0]<<" ";
		}
		cout<<endl;
	}
}
