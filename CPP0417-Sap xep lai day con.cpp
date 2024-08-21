#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		deque<int> de;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				de.push_back(i);
			}
		}
		cout<<de.front()+1<<" "<<de.back()+1<<endl;
	}
}
