#include<bits/stdc++.h>

using namespace std;
int main(){
	string s;
	getline(cin,s);
	vector<string> a;
	stringstream ss(s);
	string tam;
	while(ss >> tam){
		for(int i=0;i<tam.size();i++){
			tam[i]=tolower(tam[i]);
		}
		a.push_back(tam);
	}
	cout<<a[a.size()-1];
	for(int i=0;i<a.size()-1;i++){
		cout<<a[i][0];
	}
	cout<<"@ptit.edu.vn";
}

