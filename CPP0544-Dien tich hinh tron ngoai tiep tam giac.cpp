#include<bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238
class Diem{
	public:
		double x,y;	
};
void nhap(Diem &a,Diem &b,Diem &c){
	cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
}
void tinh(Diem A,Diem B,Diem C){
	double a=sqrt( pow(A.x-B.x,2) + pow(A.y-B.y,2) );
	double b=sqrt( pow(B.x-C.x,2) + pow(B.y-C.y,2) );
	double c=sqrt( pow(C.x-A.x,2) + pow(C.y-A.y,2) );
	int check=0;
	if( a+b>c && a+c>b && b+c>a ){
		check = 1;
	}
	double s=sqrt( (a+b+c) * (a+b-c) * (b+c-a) * (c+a-b) )/4;
	double r=a*b*c/(4*s);
	double kq=r*r*PI;
	if(check == 1){
		cout<<fixed<<setprecision(3)<<kq<<endl;
	}
	else cout<<"INVALID\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		Diem A,B,C;
		nhap(A,B,C);
		tinh(A,B,C);
	}
}

