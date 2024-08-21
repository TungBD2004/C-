#include<bits/stdc++.h>
using namespace std;

int tn(string s){
	if(s.size()==1){
		return 0;
	}
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			return 0;
		}
		l++,r--;
	}
	return 1;
}
void sapxep(string a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int uj=a[j].size();
            int ui=a[i].size();
            if(uj>ui)
            {
                string swap;
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
            if(uj==ui)
            {
                for(int g=0;g<ui;g++)
                {
                    if(a[i][g]<a[j][g])
                    {
                        string swap;
                        swap=a[i];
                        a[i]=a[j];
                        a[j]=swap;
                        break;
                    }
                }
            }
        }
    }
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tam;
	string b[100000];
	map<string,int> mp;
	int n=0;
	while(ss >> tam){
		b[n++]=tam;
	}
	sapxep(b,n);
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
		
	}
	


