#include<iostream>
#include<conio.h>
using namespace std;
//address swap
void swap(int **p3, int **p4)
{
	int *t;
	t=*p3;
	*p3=*p4;
	*p4=t;
}
int main(void)
{
	int a=5 , b=6;
	int *p1=&a , *p2=&b;
	swap(&p1,&p2);
	cout<<a<<"\t"<<b<<endl;
	cout<<*p1<<"\t"<<*p2<<endl;
	return 0;
}
