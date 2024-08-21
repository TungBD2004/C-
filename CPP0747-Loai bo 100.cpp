#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int dem=0;
        if(s.size()<3){
        	break;
		}
		else{
			for(int i=0;i<s.size()-2;i++){
				if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0'){
					dem+=3;
					s.erase(i,3);
					i=-1;
				}
			}
		}
		cout<<dem<<endl;
        
    }
}
