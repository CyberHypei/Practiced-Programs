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
    vector <long long> arr;
    long long N,z,temp;
    long long x;
    while(T--){
        cin >> N;
        int flag=0;
        for(int i=0;i<N;i++){
            cin >> x;
            arr.push_back(x);
        }
        int j;
        for(int i=0,j=1;i<N-1;i++,j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }
            
        }
        for(int i=0,j=1;i<N-1;i++,j++){
            if(arr[i]>arr[j]){
                cout << "No" << endl;
                flag=1;
                break;
            }
            
        }
        if(flag==0)
            cout << "Yes" << endl;

        arr.clear();
    }
    
}

/*
cin >> N;
        long long count=0;
        long long y=0;
        for(long long i=0;i<N;i++){
            cin >> x;
            arr.push_back(x);
            if(x<y){
                count++;
                z=i-1;
                //cout << x << " " << y << endl;
                //cout << count << endl;
                //cout << z << endl;
            }
            y=x;
        }
        if(count>2||count==2){
            cout << "NO" << endl;
        }else if(count==0){
            cout << "YEs" << endl;
        }else if(count==1){
            temp = arr[z];
            arr[z]=arr[z+1];
            arr[z+1]=temp;
            //cout << z << endl;
            //cout << arr[z+1] << endl;
            if(arr[z+2]>=arr[z+1]){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        } 
        arr.clear();

*/