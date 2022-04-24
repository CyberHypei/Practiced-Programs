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
        int x,y,z,temp;
        cin >> x >> y;
        temp = x*10;
        z = y*5;
        if(temp>z){
            cout << "First" << endl;
        }else if(temp==z){
            cout << "Any" << endl;
        }else{
            cout << "Second" << endl;
        }
        
    }
}