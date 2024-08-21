#include<bits/stdc++.h>
using namespace std;

struct MatHang{
	int so;
	string ten,nhom;
	float giamua,giaban;
	float lai;	
};
void nhap(MatHang a[],int n){
	for(int i=0;i<n;i++){
		a[i].so=i+1;
		cin.ignore();
		getline(cin,a[i].ten);
		getline(cin,a[i].nhom);
		cin>>a[i].giamua>>a[i].giaban;
		a[i].lai=(a[i].giaban-a[i].giamua);
	}	
}
void in(MatHang a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].so<<" "<<a[i].ten<<" "<<a[i].nhom<<" "<<fixed<<setprecision(2)<<a[i].lai<<endl;
	}
}
void sapxep(MatHang a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].lai<a[j].lai){
				swap(a[i],a[j]);
			}
		}
	}
}


int main(){
	struct MatHang a[50];
	int n;
	cin>>n;
	nhap(a,n);
	sapxep(a,n);
	in(a,n);
	return 0;
}
