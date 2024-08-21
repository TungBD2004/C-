#include<iostream>

using namespace std;
int check(int n){
	while(n>0){
		int m=n%10;
		if(m!=0 && m!=6 && m!=8){
			return 0;
		}
		n/=10;
	}
	return 1;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(check(n)){
			cout<<"YES\n";
		}
		else 
		cout<<"NO\n";
	}
	
}
