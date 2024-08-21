#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n==1){
			cout<<a[0];
		}
		else if(n==2){
			cout<<max(a[0],a[1]);
		}
		else{
			long long b=a[0],c=a[1],d=a[0]+a[2];
			for(int i=3;i<n;i++){
				long long e=a[i];
				if(b>c)
				e+=b;
				else e+=c;
				b=c,c=d,d=e;
			}
			if(c>d)
			cout<<c;
			else cout<<d;
		}
		cout<<endl;
	}
}
