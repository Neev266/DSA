#include <bits/stdc++.h>
using namespace std;
 
const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    char mat[10][10];
	    for(int i=0;i<10;i++){
	        for(int j=0;j<10;j++){
	            cin>>mat[i][j];
	        }
	    }
	    int ttl_score=0;
	    for(int i=0;i<10;i++){
	        for(int j=0;j<10;j++){
	            if(mat[i][j]=='X'){
	                ttl_score+=score[i][j];
	            }
	        }
	    }
	    cout<<ttl_score<<endl;
	    
	}
 
}