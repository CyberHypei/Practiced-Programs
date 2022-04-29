#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll temp;
        temp = n/5;
        n=n-temp;
        cout<<n<<endl;
    }
    return 0;
    

}