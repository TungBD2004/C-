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
		sort(a,a+n);
		int so=1;
		for(int i=0;i<n;i++){
			if(a[i]>0){
				if(a[i]<=so){
					so=a[i]+1;;
				}
				else{
					break;
				}
			}
		}
		cout<<so<<endl;
	}
}
