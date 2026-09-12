#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin>>n;
        string a,b; 
        cin>>a>>b;
        vector<int>o1,o2,e1,e2;
        for(int i=0;i<n;i++){
          if(i%2){
            if(a[i]=='1') o1.push_back(i);
            if(b[i]=='1') o2.push_back(i);
          }else{
            if(a[i]=='1') e1.push_back(i);
            if(b[i]=='1') e2.push_back(i);
          }
        }
        if(o1.size()!=o2.size()||e1.size()!=e2.size()) cout<<-1<<endl;
        else{
          ll cnt=0;
          for(int i=0;i<o1.size();i++)  cnt+=(abs(o1[i]-o2[i])/2);
          for(int i=0;i<e1.size();i++)  cnt+=(abs(e1[i]-e2[i])/2);
          cout<<cnt<<endl;
        }
    }
    return 0;
}