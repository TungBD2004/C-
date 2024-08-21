#include<bits/stdc++.h>
using namespace std;

int tinh(string s,int k){
	int n=s.size();
	int dem=0;
	for(int i=0;i<n;i++){
		int kq=0;
		for(int j=i;j<n;j++){
			kq = kq*10 + s[j] - '0';
			kq %= k;
			if(kq == 0){
				dem++;
			}
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<tinh(s,8)-tinh(s,24)<<endl;
	}
}
