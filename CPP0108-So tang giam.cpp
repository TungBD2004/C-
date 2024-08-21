#include<iostream>
#include<math.h>

using namespace std;
int nt(int n){
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int tang(int n){
	while(n>=10){
		if(n%10<=(n/10)%10)
		return 0;
		n/=10;
	}
	return 1;
}
int giam(int n){
	while(n>=10){
		if(n%10>=(n/10)%10)
		return 0;
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
		int a=pow(10,n-1);
		int b=pow(10,n);
		int dem=0;
		for(int i=a;i<=b;i++){
			if(tang(i)||giam(i)){
			if(nt(i)){
				dem++;
			}
			}
			
			}
		
		cout<<dem<<endl;
	}
}
