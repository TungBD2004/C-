#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1;
		string s2;
		getline(cin,s1);
		getline(cin,s2);
		stringstream ss1(s1);
		stringstream ss2(s2);
		set<string> se1;
		set<string> se2;
		string tam1;
		string tam2;
		while(ss1 >> tam1){
			se1.insert(tam1);
		}
		while(ss2 >> tam2){
			se2.insert(tam2);
		}
		for(auto x : se1){
			if(se2.count(x)==0){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
	
	
}
