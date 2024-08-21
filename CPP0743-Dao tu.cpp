#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		scanf("\n");
		getline(cin,s);
		stringstream ss(s);
		string tam;
		vector<string> luu;
		while(ss >> tam){
		luu.push_back(tam);
		}
		for(int i=luu.size()-1;i>=0;i--){
			cout<<luu[i]<<" ";
		}
		cout<<endl;
	}
}
