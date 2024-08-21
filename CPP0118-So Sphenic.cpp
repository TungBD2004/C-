#include<iostream>
#include<math.h>

int sphenic(int n){
	int tong=0;
	for(int i=2;i<=sqrt(n);i++){
		int dem=0;
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem>=2){
			return 0;
		}
		if(dem==1)
		tong++;
	}
	if(n!=1)
	tong++;
	return tong;
	
}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(sphenic(n)==3){
			cout<<"1\n";
		}
		else 
		cout<<"0\n";
	
	
}
}
