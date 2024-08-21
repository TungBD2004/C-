#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=2;;){
			if(n%i==0){
				n/=i;
				if(n==1){
				cout<<i<<endl;
				break;	
			}
			}
			else i++;
		}
	
	}
	
}
