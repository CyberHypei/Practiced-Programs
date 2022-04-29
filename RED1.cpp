#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void test_cases(){
        ll n;
        ll temp;
        cin >> n ;

        if(n==1){
            cout<<"0"<<endl;
            return ;
        }

        ll count=0;

        while(n%2==0){//power of 2
            n/=2;
            count++;
        }

        if(count == 0){
            //n is odd
            cout << "1" << endl;
            return ;
        }else if(count%2==1){
            cout << "-1" << endl;
            return ;
        }

        temp=(sqrtl(n));

        if(temp*temp==n){
            cout << "1" <<endl;
            return ;
        }
            cout << "2" <<endl;
}

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
        test_cases();
    }
    return 0;
    

}