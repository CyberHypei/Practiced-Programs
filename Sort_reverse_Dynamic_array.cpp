#include<iostream>
#include<stdlib.h>
using namespace std;
class Array{
	int *arr;	//Dynamic array
	int n;
	public:
	void getdata(){
		cout<<"Enter how many nos.:";
		cin>>n;
		arr=new int[n];
		if(arr==NULL){
			cerr<<"Memory is full";
			exit(1);
		}
		for(int i=0;i<n;i++){
			cout<<"Enter element : "<<i+1<<":";
			cin>>arr[i];
		}
	}
	void sort(){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]>arr[j]){
					int t=arr[i];
					arr[i]=arr[j];
					arr[j]=t;
				}
			}
		}
	}
	void reverse(){
		for(int i=0,j=n-1;i<j;i++,j--){
			int t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
	void display(){
		for(int i=0;i<n;i++)
			cout<<arr[i]<<"\t";
		cout<<endl;
	}
	void free(){
		delete [] arr;
	}
};
int main(){
	Array a1;
	a1.getdata();
	a1.sort();
	a1.display();
	a1.reverse();
	a1.display();
	a1.free();
	return 0;
}	
