#include<iostream>
using namespace std;
int  main()
{
int a,b,c,d,max;
cout<<"enter the 4 number";
cin>>a>>b>>c>>d;
max =(a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d)));
cout<<"max is"<<max;
return 0;
}
