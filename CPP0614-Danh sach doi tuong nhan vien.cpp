#include<bits/stdc++.h>
using namespace std;

int stt=1;

class NhanVien{
	private:
		string ma,ten,gt,ns,dc,mst,date;
	public:
		NhanVien(){
			ma=ten=ns=dc=mst=date=gt="";
		}
		friend istream &operator >> (istream &in,NhanVien &a){
			in.ignore();
			getline(in,a.ten);
			in>>a.gt>>a.ns;
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
			out<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" ";
			out<<a.mst<<" "<<a.date<<endl;
			return out;
		}
		
};




int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
