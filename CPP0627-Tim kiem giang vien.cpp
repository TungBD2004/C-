#include<bits/stdc++.h>
using namespace std;
int stt=1;

string chuanhoa(string s){
	stringstream ss(s);
	string tam;
	string luu;
	while(ss>>tam){
		luu+=toupper(tam[0]);
	}
	return luu;
}
string chuanhoa2(string &s)
{
    for(int i=0;i<s.size();i++){
    	s[i]=tolower(s[i]);
	}
	return s;
}
class GiaoVien{
	public: 
		string ma,ten,khoa;
};

void nhap(GiaoVien &a){
	string s=to_string(stt++);
	while(s.size()<2){
		s="0"+s;
	}
	a.ma="GV"+s;
	
	getline(cin,a.ten);
	getline(cin,a.khoa);
}

void in(GiaoVien a){
	cout<<a.ma<<" "<<a.ten<<" "<<chuanhoa(a.khoa)<<endl;
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	GiaoVien ds[100];
	for(int i=0;i<n;i++){
		nhap(ds[i]);
	}
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":\n";
		chuanhoa2(s);
		for(int i=0;i<n;i++){
			string tam=ds[i].ten;
			chuanhoa2(tam);
			if(tam.find(s) != -1){
				in(ds[i]);
			}
			else continue;
		}
	}
	
}





