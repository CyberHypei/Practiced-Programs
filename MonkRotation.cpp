#include<iostream>

using namespace std;

void Rotation(){

    int *A,*Final;
    int N,K;
	int i,j,k;

    //cout<<"Enter No. of elements in array"<<endl;
    cin>>N>>K;
    //cout<<"Enter No. of rotations to be executed"<<endl;
    //cin>>K;

    A=new int[N];
    Final=new int[N];
	//Array input
	for(i=0;i<N;i++){
		cin>>A[i];
	}
    K=K%N;
    //Rotations
    for(i=0;i<K;i++){
        for(j=0,k=0;j<N,k<N;j++){
            Final[++k]=A[j];
            Final[0]=A[N-1];

        }
        for(j=0,k=0;j<N,k<N;j++,k++){
            A[j]=Final[k];
        }
    }

	//Array output
    //cout<<"Elements are - "<<endl;
	for(i=0;i<N;i++){
		
        cout<<A[i]<<" ";
        
	}
    cout<<endl;
}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif

	int T;
	//int *A,*Final;
	int i;//j,k;

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    //cout<<"Enter No. of test cases"<<endl;
    cin>>T;

    for(i=0;i<T;i++)
        Rotation();
/*
	A=new int[N];
    Final=new int[N];
	//Array input
	for(i=0;i<N;i++){
		cin>>A[i];
	}
    
    //Rotations
    for(i=0;i<K;i++){
        for(j=0,k=0;j<N,k<N;j++){
            Final[++k]=A[j];
            Final[0]=A[N-1];

        }
        for(j=0,k=0;j<N,k<N;j++,k++){
            A[j]=Final[k];
        }
    }

	//Array output
    //cout<<"Elements are - "<<endl;
	for(i=0;i<N;i++){
		
        cout<<A[i]<<" ";
        
	}
    */
    return 0;
}