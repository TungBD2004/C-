#include<bits/stdc++.h>
using namespace std;

int n,x[1000],used[1000];
void khoitao(){
	for(int i=1;i<=n;i++){
		used[i]=1;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]){
			x[i]=j;
			used[j]=false;
			if(i==n){
				in();
			}
			else Try(i+1);
			used[j]=true;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		khoitao();
		Try(1);
		cout<<endl;
	}
}
