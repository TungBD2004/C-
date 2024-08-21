#include<bits/stdc++.h>

using namespace std;
int main(){
	int n,k,b;
	cin>>n>>k>>b;
	int a[b];
	for(int i=0;i<b;i++){
		cin>>a[i];
	}
	sort(a,a+b);
	int min=1000001;
	for(int i=0;i<b;i++){
		if(abs(abs(a[i]-a[i+1])-k)<min){
			min=abs(abs(a[i]-a[i+1])-k);
		}
	}
	cout<<min;
}
