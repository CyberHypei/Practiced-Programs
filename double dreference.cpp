#include<iostream>
#include<math.h>
using namespace std;
void swap(int **,int **);
int main()
{
int a,b,*p1,*p2;
p1= &a;
p2 = &b;
cout<<"enter the number";
cin>>*p1>>*p2;
swap(&p1,&p2);
cout<<a<<"\t"<<b<<endl;
cout<<*p1<<"\t"<<*p2<<endl;
return 0;
}
void swap(int **p3,int **p4)
{
int t;
t = **p3;
**p3 = **p4;
**p4 = t;
}
