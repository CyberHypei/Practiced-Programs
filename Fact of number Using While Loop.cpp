#include<iostream>
using namespace std;
int main()
{
	int n,i,fact;
	cout<<"Enter a number:";
	cin>>n;
	fact=1;
	i=n;
	while(i>=1)
	{
		fact*=i;
		i--;
	}
	cout<<"Fact is " << fact;
	return 0;
}
