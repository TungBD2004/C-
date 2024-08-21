#include<bits/stdc++.h>

using namespace std;
string hoa (string s){ 
for(int i = 0; i < s.size();i++){ 
	s[i] = toupper(s[i]); 
	} 
	return s; 
}
int main(){
	string s;
	getline(cin,s);
	string tam;
	vector<string> a;
	stringstream ss(s);
	while(ss >> tam){
		tam[0]=toupper(tam[0]);
		for(int i=1;i<tam.size();i++){
			tam[i]=tolower(tam[i]);
		}
		a.push_back(tam);	
	}
	for(int i=0;i<a.size()-1;i++){
		cout<<a[i];
		if(i<a.size()-2){
			cout<<" ";
		}
	}
	cout<<", ";
	cout<<hoa(a[a.size()-1]);
}
