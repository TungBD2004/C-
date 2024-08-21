#include<iostream>
#include<math.h>

using namespace std;

long long UCLN(long long a,long long b){
	if(b==0)
	return a;
	return UCLN(b,a%b);
}
long long BCNN(long long a,long long b){
	return a*b/UCLN(a,b);
}
long long tinh(long long n,long long x,long long y,long long z){
	long long tam=BCNN(BCNN(x,y),z);
	long long a=pow(10,n-1);
	long long so=(a+tam-1)/tam*tam;
	if(tam<pow(10,n))
	return so;
	return -1;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,t;
		cin>>x>>y>>z>>t;
		cout<<tinh(t,x,y,z)<<endl;
	}
}

