#include<bits/stdc++.h> 
using namespace std; 
int biensodep(string a){ 
	if(a[6]>a[5] && a[7]>a[6] && a[9]>a[7] && a[10]>a[9]){ 
	return 1; 
	} 
	if(a[6]==a[5] && a[7]==a[6] && a[9]==a[7] && a[10]==a[9]){ 
	return 1; 
	} 
	if(a[6]==a[5] && a[7]==a[6] && a[10]==a[9]){ return 1; } for(int i=5;i<=10;i++){ if(i!=8){ if(a[i]!='6' && a[i]!='8'){ return 0; } } } return 1; } int main(){ int t; cin >> t; cin.ignore(); while(t--){ string a; getline(cin,a); if(biensodep(a)==1){ cout << "YES" << endl; } else cout << "NO" << endl; } }
