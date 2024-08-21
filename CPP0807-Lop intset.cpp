#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int x;
	set<int> se1,se2;
	ifstream fi;
	fi.open("DATA.in");
	fi>>n>>m;
	for(int i=0;i<n;i++){
		fi>>x;
		se1.insert(x);
	}
	for(int i=0;i<m;i++){
		fi>>x;
		se2.insert(x);
	}
	map<int,int> mp;
	for(auto x: se1){
		mp[x]++;
	}
	for(auto x: se2){
		mp[x]++;
	}
	for(auto x:mp){
		if(x.second == 2){
			cout<<x.first<<" ";
		}
	}
}
