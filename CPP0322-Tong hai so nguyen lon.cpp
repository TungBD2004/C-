#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
		getline(cin,a);
		getline(cin,b);
		while(a.size()>b.size()){
		b="0"+b;
	}
	while(a.size()<b.size()){
		a="0"+a;
	}
	int n=max(a.size(),b.size());
	int kq[n]={0};
	int nho=0;
	for(int i=n-1;i>=0;i--){
		int k=(a[i]-'0')+(b[i]-'0');
		if(k+nho >= 10){
			kq[i]+=(k+nho-10);
			nho=1;
		}
		else{
			kq[i]=k+nho;
			nho=0;	
		}
	}
	if(nho == 1){
		cout<<"1";
	}
	for(int i=0;i<n;i++){
		cout<<kq[i];
	}
		cout<<endl;
	}
	
}
