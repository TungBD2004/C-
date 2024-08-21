#include<bits/stdc++.h>

using namespace std;
	int a[15]={0,1,1,0,3,2,2,0,1,3,2,2,0,1,3};
	int b[15]={0,2,2,0,1,2,3,3,1,1,2,3,3,1,1};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c[15];
		for(int i=0;i<15;i++){
			char x;
			cin>>x;
			c[i]=x-'A';
		}
		float s=0;
		if(n==101){
			for(int i=0;i<15;i++){
			if(a[i]==c[i])
			s+=10.00/15;
		}
		
	}
		if(n==102){
			for(int i=0;i<15;i++){
			if(b[i]==c[i])
			s+=10.00/15;
		}	
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
}
	
}
