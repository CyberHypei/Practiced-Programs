#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int T;
    cin >> T;
    while(T--){
        int x,y;
        cin >> x >> y;
        x=3*x;
        y=2*y;
        if(x>y){
            cout << y << endl;
        }else{
            cout << x << endl;
        }
    }

}