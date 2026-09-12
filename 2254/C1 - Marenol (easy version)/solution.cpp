#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int e1=0,o1=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                if(i%2==0){
                    e1++;
                }else{
                    o1++;
                }
            }
        }
        int e2=0,o2=0;
        for(int i=0;i<n;i++){
            if(s2[i]=='1'){
                if(i%2==0){
                    e2++;
                }else{
                    o2++;
                }
            }
        }
        if(e1==e2 && o1==o2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
	}
 
}