#include<bits/stdc++.h>
using namespace std;

class ToaDo{
	public:
	double x,y,z;	
};

void nhap(ToaDo &a,ToaDo &b, ToaDo &c,ToaDo &d){
	cin>>a.x>>a.y>>a.z;
	cin>>b.x>>b.y>>b.z;
	cin>>c.x>>c.y>>c.z;
	cin>>d.x>>d.y>>d.z;	
}
void tinh(ToaDo a,ToaDo b, ToaDo c,ToaDo d){
	ToaDo AB,AC,AD;
	AB.x=b.x-a.x;
	AB.y=b.y-a.y;
	AB.z=b.z-a.z;
	AC.x=c.x-a.x;
	AC.y=c.y-a.y;
	AC.z=c.z-a.z;
	AD.x=d.x-a.x;
	AD.y=d.y-a.y;
	AD.z=d.z-a.z;
	ToaDo ABAC;
	ABAC.x=AB.y*AC.z-AB.z*AC.y;
	ABAC.y=AB.z*AC.x-AB.x*AC.z;
	ABAC.z=AB.y*AC.x-AB.x*AC.y;
	double kq=0;
	kq=ABAC.x*AD.x+ABAC.y*AD.y+ABAC.z*AD.z;
	if(kq==0){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ToaDo A,B,C,D;
		nhap(A,B,C,D);
		tinh(A,B,C,D);
	}
}

