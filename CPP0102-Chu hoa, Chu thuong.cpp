#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char a;
		char b;
		cin>>a;
		if(a<='z'&&a>='a'){
			b=toupper(a);
			cout<<b<<endl;	
		}
		if(a>='A'&&a<='Z'){
			b=tolower(a);
			cout<<b<<endl;
			
		}
		
	}
}
