#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		int d=n/k;
		int e=n%k;
		int sum=0;
		if(n<k){
			sum=n*(n+1)/2;
			
		}
		else{
			sum=d*(k-1)*k/2+e*(e+1)/2;
		}
		if(k==sum){
			cout<<"1\n";
		}
		else
		cout<<"0\n";
	}
	
	
}
