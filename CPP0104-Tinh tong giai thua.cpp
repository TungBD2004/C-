#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	long long s=0;
	long long a=1;
	for(int i=1;i<=n;i++){
		s+=a*i;
		a*=i;
	}
	cout<<(long long)s;
}

