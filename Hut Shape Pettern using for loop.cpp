#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n-1;k++)
			cout<<" ";
		for(int j=1;j<=2*i-1;j++)
			if(j==1 || j==2*i-1 || i==n)
				cout<<"*";
			else
				cout<<" ";
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<2*n;j++)
		{
			if(j==1 || j==2*n-1 ||i==n)
				cout<<"*";
			else
				cout<" ";
		}
		cout<<endl;
	}
	return 0;
}
