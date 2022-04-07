#include<iostream>
#include<string.h>
using namespace std;
class student{
	int roll;
	char name[20];
	int sub1,sub2;
	float per;
	
	public:
	void getdata(){
		cout<<"Enter roll:";
		cin>>roll;
		cin.ignore();
		cout<<"Enter name:";
		cin.getline(name,20);
		cout<<"Enter 2 nos.:";
		cin>>sub1>>sub2;
	}
	void setdata(int r,const char n[],int a, int b){
		roll=r;
		strcpy(name,n);
		sub1=a;
		sub2=b;
	}
	void calc_per(){
		per=(sub1+sub2)/2.0f;
	}
	void display(){
		cout<<roll<<"\t"<<name<<"\t"<<sub1<<"\t"<<sub2<<"\t"<<per<<"%"<<endl;
	}
};
int main(){
	student *s;
	int n;
	cout<<"Enter how many sutdents:";
	cin>>n;
	
	s=new student[n];
	if(s==NULL){
		cerr<<"Memory is full";
		exit(1);
	}
	
	for(int i=0;i<n;i++){
		s[i].getdata();
		s[i].calc_per();
	}
	
	cout<<"Roll\tName\tSub1\tSub2\tPer\n";
	for(int i=0;i<n;i++){
		s[i].display();
	}
	delete [] s;
	return 0;
}	
