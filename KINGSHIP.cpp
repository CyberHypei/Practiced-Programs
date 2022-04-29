#include<bits/stdc++.h>
using namespace std;
//#define ll long long int;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int p[n];
        for(int i=0;i<n;i++){
            cin >> p[i];
        }

        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(mn>p[i]){
                mn=p[i];
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=mn*p[i];
        }

        ans-=mn*mn;

        cout << ans << endl;
    }

    return 0;
}

    /*int t;
    cin >> t;
    while(t--){
        int n,x,finalmincost;
        vector <int> p;
        for(int i=0;i<n;i++){
            cin >> x;
            p.push_back(x);
        }

        int cost[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || i==0 || j==0){
                    cost[i][j]=INT_MAX;
                }else{
                    cost[i][j]=p[i]*p[j];
                }
            }
        }

        int near[n] = {INT_MAX};
        vector <pair<int,int>> temp;
        int min=INT_MAX;
        int mini,minj;

        for(int i=2;i<n;i++){ // Let i be columns
            for(int j=1;j<n;j++){ // Let j be rows
                if(cost[i][j]<min){
                    min=cost[i][j];
                    mini=i;
                    minj=j;
                }
            }
        }
        temp.push_back({mini,minj});
        for(int i=1;i<n;i++){ // Let i be the rows

            if(temp[i-1].first==i){
                near[i]=0;
                
            }

            int j=temp[i-1].first;
            if(cost[i][j]<cost[i][near[i]]){ //For checking with temp.first
                near[i]=temp[i-1].first;
            }
            
            j=temp[i-1].second;
            if(cost[i][j]<cost[i][near[i]]){ //For checking with temp.second
                near[i]=temp[i-1].second;
            }
            
            temp.push_back({near[i],near[i]+1});

        }

        for(int i=0;i<n;i++){
            finalmincost+=temp[i].first;
        }

        cout << finalmincost << endl;


        temp.clear();
        p.clear();

    }
*/