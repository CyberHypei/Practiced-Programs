#include<bits/stdc++.h>
using namespace std;

int main(){
    

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    long long int T,N,n,m,q,z,x;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> N;
        z=N-2;
           int flag=0;
           m=z%4;
           if(z==0||z==1){
               m=0;
           }
            switch(m){
                case 0: std::cout << "3" << std::endl;
                        flag=1;
                    break;
                case 1: std::cout << "3" << std::endl;
                        flag=1;
                    break;
                default : break;
            }
            if(flag==0){
                    q=z%2;
                    switch(q){
                        case 0: x=N/4;
                                n=4*x+3;
                                //std::cout << "%2 and Case 0" << std::endl;
                                cout<<n<<endl;
                            break;
                        default : cout<<N<<endl;
                            break;
                }
            }
        }
    
    return 0;
    
}



/*


#include<bits/stdc++.h>
using namespace std;

int main(){
    
/*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int T,N,n,m,q;
    //vector <int> Beauty;
    //vector <int> Colors;
    cin >> T;
    int x=0;
    int y=0;
    for(int i=0;i<T;i++){
        cin >> N;
        //Colors.push_back(N);
        N=N-2;
    //}
        
       //for(int i=0;i<T;i++){ 
           m=N%4
            switch(m){
                case 0: std::cout << "3" << std::endl;
                    break;
                case 1: std::cout << "3" << std::endl;
                    break;
                default : break;
            }
            q=N%2
            switch(q){
                case 0: n=7;
                        n=4*x+7;
                        x++;
                        cout<<n<<endl;
                    break;
                case 1: n=5;
                        n=4*y+5;
                        y++;
                        cout<<n<<endl;
                    break;
                default : break;
        }
        
        /*if(N%4==0){
            cout<<"3"<<endl;
        }elseif(N%4==1){
            cout<<"3"<<endl;
        }elseif(N%2==0){
            n=7;
            n=4*x+7;
            x++;
            cout<<n<<endl;
        }elseif(N%2==1){
            n=5;
            n=4*y+5;
            y++;
            cout<<n<<endl;
        }*/
        
    //}
        /*max=*max_element(Colors.begin(), Colors.end());
        //cout << max << endl;
        int B=1;
        for(int j=2;j<max+1;j++){
            
            if(j%2==0){
                B=(B^j);
                cout << "Updated Beauty at "<< j-1 << " is " << B << endl<<endl;
                Beauty.push_back(B);
            }
            else{
                B=(B&j);
                cout << "Updated Beauty at "<< j-1 << " is " << B << endl<<endl;
                Beauty.push_back(B);
            }
        }

        for(int i=0;i<Colors.size();i++){
        N=Colors[i];
        //cout<<N<<endl<<endl;
        cout << Beauty[N-2] << endl ;
        }
    return 0;

    
}


*/