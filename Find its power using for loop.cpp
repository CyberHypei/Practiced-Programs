#include<iostream>
using namespace std;
int main()
{
	int n,p,ans,i;
	cout<<"Enter a number and its power:";
	cin>>n>>p;
	for(i=1,ans=1;i<=p;i++)
		ans*=n;
		cout<<ans;
	return 0;
}
