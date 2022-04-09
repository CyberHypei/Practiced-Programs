#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif

	int i,j,T,n;
	int A,B ;
	char O ;
	vector<int>add;
	vector<int>subs;
	vector<int>divide;
	cin >> T;
	int N;
	for(j=0;j<T;j++){
	    cin >> O ;
	    if(O=='+'){
	        cin >> A >> B >> N;
	        add.push_back(A);
	        for(i=0;i<N;++i){
	            A=A+B;
	            add.push_back(A);
	        }
	        
	        //output
	        for(i=0;i<add.size();i++){
	            cout << add[i] << " ";
	        }
	        cout << endl;
	    }else if(O=='-'){
	        cin >> A >> B >> N;
	        subs.push_back(A);
	        for(i=0;i<N;++i){
	            A=A-B;
	            subs.push_back(A);
	        }
	        //output
	        for(i=0;i<add.size();i++){
	            cout << subs[i] << " ";
	        }
	        cout << endl;
	        
	    }else if(O=='*'){
	        cin >> A >> B >> N;
	        divide.push_back(A);
	        for(i=0;i<N;++i){
	            A=A*B;
	            divide.push_back(A);
	        }
	        
	        //output
	        for(i=0;i<add.size();i++){
	            cout << divide[i] << " ";
	        }
	        cout << endl;
	    }else{
	        cout << "Invaild Operator" << endl;
	    }
	    //if(O=='+') n=1;
	    //elseif(O=='-') n=2;
	    //elseif(O=='*') n=3;
	    /*switch (O)
        {
            case '+': // code to be executed if n = 1;
                cin >> A >>B >>N;
	            add.push_back(A);
	            for(i=0;i<N-1;++i){
	            	A=A+B;
	            	add.push_back(A);
	            }
	        
	        //output
	        for(i=0;i<add.size();i++){
	                cout << add[i] << " ";
	            }
				cout << endl;
                break;
            case '-': // code to be executed if n = 2;
                 cin >> A >>B >>N;
	            subs.push_back(A);
	            for(i=0;i<N;++i){
	                A=A-B;
	                subs.push_back(A);
	            }
	        //output
    	        for(i=0;i<subs.size();i++){
    	            cout << subs[i] << " ";
    	        }
				cout << endl;
                break;
            case '*'://code to be xecuted if n=3;
                cin >> A >>B >>N;
    	        divide.push_back(A);
    	        for(i=0;i<N;++i){
    	            A=A*B;
    	            divide.push_back(A);
    	        }
	        
    	        //output
    	        for(i=0;i<divide.size();i++){
    	            cout << divide[i] << " ";
    	        }
				cout << endl;
    	        break;
            default: // code to be executed if n doesn't match any cases
                std::cout << "Invaild Operator" << std::endl;
        }
	        */
	    }
	    
	return 0;
}
