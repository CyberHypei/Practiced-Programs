#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"Enter year";
	cin>>y;
	if(y%100==0 || y%100!=0&& y%4==0)
		cout<<"LY";
	else
		cout<<"Not LY";
	return 0;	
}
