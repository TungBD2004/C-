#include<bits/stdc++.h>
using namespace std;

int stt=1;

class NhanVien{
	
	private:
		string ma,ten,gt,dc,mst,date;
		int m,d,y;
	public:
		NhanVien(){
			ma=ten=gt=dc=mst=date="";
			m=d=y=0;
		}
		friend istream &operator >> (istream &in,NhanVien &a){
			in.ignore();
			getline(in,a.ten);
			in>>a.gt;
			scanf("%d/%d/%d",&a.m,&a.d,&a.y);
			in.ignore();
			getline(in,a.dc);
			in>>a.mst>>a.date;
			string s=to_string(stt++);
			while(s.size()<5){
				s="0"+s;
			}
			a.ma=s;
			return in;
		}
		friend ostream &operator << (ostream &out,NhanVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.gt<<" ";
			if(a.m<10){
				out<<"0";
			}
			out<<a.m<<"/";
			if(a.d<10){
				out<<"0";
			}
			out<<a.d<<"/"<<a.y<<" ";
			out<<a.dc<<" ";
			out<<a.mst<<" "<<a.date<<endl;
			return out;
		}
		int getd(){
			return this->d;
		}
		int getm(){
			return this->m;
		}
		int gety(){
			return this->y;
		}
};
bool cmp(NhanVien a,NhanVien b){
	if(a.gety()<b.gety()){
            	return 1;
			}
			if(a.gety() == b.gety()){
				if(a.getm()<b.getm()){
					return 1;
				}
				if(a.getm() == b.getm()){
					if(a.getd()<b.getd()){
						return 1;
					}
				}
			}
			return 0;
}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
