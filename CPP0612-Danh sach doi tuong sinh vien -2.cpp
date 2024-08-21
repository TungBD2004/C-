#include<bits/stdc++.h>
using namespace std;

int stt=1;
class SinhVien{
	private:
		string ma,ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			ma=ten=ns=lop="";
			gpa=0;
		}
		friend istream &operator >> (istream &in,SinhVien &a){
			in.ignore();
			getline(in,a.ten);
			in>>a.lop>>a.ns>>a.gpa;
			if(a.ns[2] !='/')
			a.ns="0"+a.ns;
			if(a.ns[5]!='/'){
				a.ns.insert(3,"0");
			}
			string s=to_string(stt++);
			while(s.size()<3){
				s="0"+s;
			}
			a.ma="B20DCCN"+s;
			string tam,luu;
			stringstream ss(a.ten);
			while(ss>>tam){
				luu += toupper(tam[0]);
				for(int i=1;i<tam.size();i++){
					luu+=tolower(tam[i]);
				}
				luu+=" ";
			}
			a.ten=luu;
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
			return out;
		}
}; 



int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

