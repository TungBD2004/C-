#include<bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m;
		cin>>a>>m;
		int check=0;
		int x=1;
		for(;x<m;){
			if(x*a%m==1){
			check=1;
			break;
			}
			x++;
		}
		if(check==1){
			cout<<x<<endl;
		}
		else 
		cout<<"-1\n";
	}
}
