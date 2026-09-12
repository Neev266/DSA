#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        
        int sum=0;
        for(int i=1;i<n;i++){
            sum=a[n-i]+a[n-i-1];
            a[n-i-1]=sum-1;
            
        }
        cout<<a[0]<<endl;
    }
}