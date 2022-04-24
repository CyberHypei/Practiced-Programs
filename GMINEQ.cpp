#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int t;
    cin >> t;
    vector <int> arr;
    while(t--){
        int n;
        cin >> n;
        int negcount = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            arr.push_back(x);
            if(x==1){
                count++;
            }
        }
        negcount=n-count;

        if(abs(count-negcount)<2){
            cout << "Yes" << endl;
        }else if(abs(count-negcount)==2){
            if(count%2!=0){
                cout << "No" <<endl;
            }else{
                cout << "yes"<< endl;
            }

        }else{
            cout << "NO" <<endl;
        }


    }
    return 0;
}

        /*//cout << count << endl;
        if(count==negcount){
            cout << "Yes" << endl;
        }else if(count==n||negcount==n){
                //cout << "for case" << t << endl;
                cout << "NO" << endl;
            }else if(n%2==0){
                if(negcount-count==2||count-negcount==2){
                    //cout << "for case" << t << endl;
                    cout << "Yes" << endl;
                }else
                {
                    cout << "No" << endl;
                }
        }else if(n%2==1){
            if(negcount-count==1||count-negcount==1){
                //cout << "for case" << t << endl;
                cout << "Yes" << endl;
            }else
            {
                cout << "No" << endl;
            }
        }*/
    

