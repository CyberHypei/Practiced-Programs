#include<bits/stdc++.h>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif
    
    int t,count;
    cin >> t;
    vector <string> arr;
    //vector <string> final;
    while(t--){
        int n,ans;
        string str;
        char ch;
        cin >> n;
        
        for(int i=0;i<n;i++){
            cin >> str ;
            arr.push_back(str);
        }
        ans=0;
        for(int i=0;i<10;i++){
            count=0;
                for(int j=0;j<n;j++){
                    if(arr[j][i]=='1'){
                        count++;
                    }
            }
            //cout << count << endl;
            if(count%2!=0){
                //final.push_back("1");
                ans++;
            }else{
                //final.push_back("0");
            }
            //cout << "Answer" << ans << endl;
        }
        cout << ans << endl;
        
        //cout << arr[1].at(2) << endl;

        /*for(int i=0;i<n+1;i++){
            cout << final[i];
        }*/

/*for(int j=0;j<10;j++){
    for(int i=0;i<n;i++)
            cout << "Element" << i << "is" << arr[i][j] << endl;
        }*/

       arr.clear();
       //final.clear();
    }
    return 0;
}