#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter number of rows:";
	cin>>n;
	i=1;
	while(i<=n)
	{
		j=n;
		while(j>=i)
		{
			if(i==1||i==n||i==j)
				cout<<"*";
			else
				cout<<" ";
			j--;
		}
		i++;
		cout<<endl;
	}
	return 0;
}
