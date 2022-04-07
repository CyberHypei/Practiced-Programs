#include<iostream>
#include<conio.h>
using namespace std;
void sumavg(int x,int y,int &r1,float &r2)
{
	r1=x+y;
	r2=(x+y)/2.0f;
}
int main(void)
{
	int a=5,b=6,sum;
	float avg;
	void (*p)(int,int,int &, float &);
	p=sumavg;
	(*p)(a,b,sum,avg);
	cout<<"Sum is "<<sum<<endl;
	cout<<"Avg is "<<avg<<endl;
	return(0);
}
