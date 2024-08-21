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
	file.open("DATA1.in");
	set<string> hop;
	map<string,int> giao;
	string s;
	while(file >> s){
		s=chuanhoa(s);
		hop.insert(s);
		giao[s]=1;
	}
	file.close();
	file.open("DATA2.in");
	
	while(file >> s){
		s=chuanhoa(s);
		hop.insert(s);
		if(giao[s]==1){
			giao[s]=2;
		}
	}
	
	for(auto it:hop){
		cout<<it<<" ";
	}
	cout<<endl;
	for(auto it:giao){
		if(it.second ==2 ){
			cout<<it.first<<" ";
		}
	}
}
