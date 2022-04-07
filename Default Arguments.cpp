#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a=0, int b=0, int c=0, int d=0)
{
	return (a+b+c+d);
}
int main(void)
{
	cout<<sum(5,6,7,8)<<endl;
	cout<<sum(5,6,7)<<endl;
	cout<<sum(5,6)<<endl;
	cout<<sum(5)<<endl;
	cout<<sum()<<endl;
	//cout<<sum(,6,7,8)<<endl;
	return (0);
}
