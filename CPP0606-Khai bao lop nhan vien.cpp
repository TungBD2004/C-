#include<bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		string ma,ten,gt,ns,dc,mst,date;
	public:
		NhanVien(){
			ma="00001";
		}	
		void nhap(){
			
			getline(cin,ten);
			cin>>gt>>ns;
			cin.ignore();
			getline(cin,dc);
			cin>>mst>>date;			
		}
		void xuat(){
			cout<<ma<<" "<<ten<<" "<<gt<<" "<<ns<<" "<<dc<<" "<<mst<<" "<<date;
		}
};

int main(){
    NhanVien a;
    //cin >> a;
    a.nhap();
    //cin >> a;
    a.xuat();
    return 0;
}
