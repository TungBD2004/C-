#include<iostream>
#include<math.h>
using namespace std;
int canbang(int n){
	if(n<10){
		return 0;
	}
	int c=0,l=0;
	while(n>0){
		if((n%10)%2==0){
			c++;
		}
		else
		l++;
		
	n/=10;	
	}
	if(c==l)
	return 1;
	return 0;	
}

int main(){
	int n;
	cin>>n;
	int a=pow(10,n-1);
	int b=pow(10,n);
	int dem=0;
	for(int i=a;i<=b;i++){
		if(canbang(i)){
			cout<<i<<" ";
			dem++;
		}
		if(dem%10==0 && dem>0){
			cout<<endl;
		}
	}
	
}
