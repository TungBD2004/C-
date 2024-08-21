#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int dem=0;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				dem++;
				if(dem==k){
					cout<<i<<endl;
					break;
				}
				n/=i;
			}
				if(dem==k){
					break;
				}			
		}
		if(n!=1){
			dem++;
			if(dem==k){
				cout<<n<<endl;
			}
		}
		if(dem<k){
			cout<<"-1\n";
		}
	}

}
