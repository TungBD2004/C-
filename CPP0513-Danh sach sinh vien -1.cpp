#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ten,lop,ns;
	float GPA;
};
void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].lop;
		cin>>a[i].ns>>a[i].GPA;
		if(a[i].ns[1] == '/'){
			a[i].ns="0"+a[i].ns;
		}
		if(a[i].ns[4] == '/'){
			a[i].ns.insert(3,"0");
		}
	}
}

void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		string s=to_string(i+1);
		while(s.size()<3){
			s="0"+s;
		}
		cout<<"B20DCCN"<<s<<" ";
		cout<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].GPA<<endl;
	}
	
	
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

