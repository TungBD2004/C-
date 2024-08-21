#include<bits/stdc++.h>
using namespace std;

bool ok=true;
int x[100],n;
void khoitao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<" ";
}
void sinh(){
	int i=n;
	while(i>0 && x[i]){
		x[i]=0;
		i--;
	}
	if(i>0) x[i]=1;
	else ok=false;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		khoitao();
		while(ok){
			in();
			sinh();
		}
		ok=true;
		cout<<endl;
	}
	
	
}
