#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x1,y1,x2,y2;
	    cin>>a>>b>>x1>>y1>>x2>>y2;
	    int dx[4]={1,-1,1,-1};
	    int dy[4]={1,1,-1,-1};
	    set<pair<int,int>> king,queen;
	    for(int i=0;i<4;i++){
	        king.insert({x1+dx[i]*a,y1+dy[i]*b});
	        king.insert({x1+dx[i]*b,y1+dy[i]*a});
	        
	        queen.insert({x2+dx[i]*a,y2+dy[i]*b});
	        queen.insert({x2+dx[i]*b,y2+dy[i]*a});
	    }
	    int cnt=0;
	    for(auto position: king){
	        if(queen.find(position)!=queen.end()){
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
 
}