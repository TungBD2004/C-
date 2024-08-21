#include<bits/stdc++.h>
using namespace std;

int chuyendoi(string s){
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum=sum*10+s[i]-'0';
	}
	return sum;
}
int ktra(string s){
	for(int i=0;i<s.size();i++){
		if(!isdigit(s[i])){
			return 0;
		}
	}
	if(s.size()>10)
	return 0;
	return 1;
}

int main(){
	long long sum=0;
	ifstream file;
	file.open("DATA.in");
	string s;
	getline(file,s);
	stringstream ss(s);
	string tam;
	while(ss >> tam){
		if(ktra(tam)){
			sum+=chuyendoi(tam);
		}
	}
	file.close();
	cout<<sum;
}
