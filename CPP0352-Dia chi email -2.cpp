#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	map<string,int> mp;
	while(t--){
		scanf("\n");
		string s;
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		string tam;
		string res="";
		while(ss >> tam){
			for(int i=0;i<tam.size();i++){
				tam[i]=tolower(tam[i]);
			}
			v.push_back(tam);
		}
		res+=v[v.size()-1];
		for(int i=0;i<v.size()-1;i++){	
			res+=v[i][0];
		}
		if(mp.count(res)==0){
			cout<<res<<"@ptit.edu.vn"<<endl;
		}
		else 
			cout<<res<<mp[res]+1<<"@ptit.edu.vn"<<endl;
			mp[res]++;
		
	}
}
