#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    vector<vector<int>> M;
    int count;
    int T,n;
    int i;
    int j,p,q;
    
    cin >> T;
    

    for(int l=0;l<T;l++){
        
        cin >> n;

    //Matrix Input
        for(i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                int x;
                cin >> x;
                temp.push_back(x);
            }
            M.push_back(temp);
        }
    //Matrix Output
        /*for(int i=0;i<n;i++){
            for (int j=0; j < n; j++)
            {
                cout<<M[i][j]<<" ";
            }
            cout<<endl;        
        }*/
        count=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(p=i;p<n;p++){
                    for(q=j;q<n;q++){
                        if(M[i][j]>M[p][q]){
                            count++;
                        }
                    }
                }
                
            }

        }
        cout << count << endl;
        M.clear();
    }
    return 0;
}