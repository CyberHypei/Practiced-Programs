#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int T,N,K,V,x,miss;
    long long sum;
    int mod1,mod2;
    sum=0;
    vector <int> arr;
    cin >> T;
    while(T--){
        cin >> N >> K >> V;
        for(int i=0;i<N;i++){
            cin >> x;
            arr.push_back(x);
        }
        sum=accumulate(arr.begin(),arr.end(),0);
        //cout<<sum<<endl;
        //mod1=sum%(N+K);
        //cout << sum << endl;
        miss=V*(N+K)-sum;
        if(miss>0&&miss%K==0){
            miss=miss/K;
            cout << miss << endl;
        }else {
            cout << "-1" << endl;
        }
        arr.clear();
    }
    return 0;
}