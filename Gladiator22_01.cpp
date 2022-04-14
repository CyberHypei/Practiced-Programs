#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int HH,MM;
    pair<int,int> LT;
    pair<int,int> TT;
    pair<int,int> DT;
    cin >> HH >> MM;
    //scanf("%d,%d",&HH,&MM);

    LT.first=HH;
    LT.second=MM;
    /*if(HH%23!=0){
        HH=HH+HH%23;
    }
    if(MM%59!=0){
        MM=MM+MM%59;
    }*/

    cin >> HH >> MM;
    //scanf("%d,%d",&HH,&MM);
    TT.first=HH;
    TT.second=MM;
    /*if(HH%23!=0){
        HH=HH+HH%23;
    }
    if(MM%59!=0){
        MM=MM+MM%59;
    }*/

    DT.first=LT.first+TT.first;
    if(DT.first%24!=0){
        DT.first=DT.first%24;
    }else{DT.first=00;}

    DT.second=LT.second+TT.second;
    if(DT.second>59){
        DT.first++;
        if(DT.first%24!=0){
        DT.first=DT.first%24;
        }else{DT.first=00;}
        DT.second=DT.second%60;
    }else{DT.second==00;}

    //printf("%d %d",DT.first,DT.second);
    cout << setfill('0') << setw(2) << DT.first << " " << setfill('0') << setw(2) << DT.second;
    
    return 0;
}