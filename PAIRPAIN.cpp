#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int T,x,y,t,n,mb;
	cin>>T;
	long long int c1,c2,ans;
    c1=0;
    c2=0;
	for(int i=0;i<T;i++){
	    cin>>x;
        c1=0;
        c2=0;
	    for(int j=0;j<x;j++){
	        cin>>y;
	        if(y==1){
	            c1++;
	        }else if(y==2){
                c2++;
            }
	    }
	    ans = c1*(x-c1) + c1*(c1-1)/2 + c2*(c2-1)/2;
	    cout << ans << endl;
	    
	}
	return 0;
}



