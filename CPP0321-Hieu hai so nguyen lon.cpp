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
		int n=max(a.size(),b.size());
	while(a.size()>b.size()){
		b="0"+b;
	}
	while(a.size()<b.size()){
		a="0"+a;
	}
	if(a<b){
		swap(a,b);
	}
	int nho=0;
	int kq[n]={0};
	for(int i=n-1;i>=0;i--){
		 int k = (a[i]-'0' )- (b[i]-'0' )- nho; 
		 if(k < 0){ 
		 nho = 1; 
		 k += 10; 
		 } 
		 else nho = 0; 
		 kq[i] += k;
	}
	for(int i=0;i<n;i++){
		cout<<kq[i];
	}
		cout<<endl;	
	}
	
}
