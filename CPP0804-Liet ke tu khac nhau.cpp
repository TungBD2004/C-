#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
int main(){
	ifstream file;
	file.open("VANBAN.in");
	string s;
	set<string> se;
	while(file>>s){
		s=chuanhoa(s);
		se.insert(s);
	}
	for(auto it:se){
		cout<<it<<endl;
	}
}
