#include<iostream>
using namespace std;
int main()
{
int a,b,c,max,smax;
cout<<"enter the 3 number";
cin>>a>>b>>c;
    if(a>b)
        {
            max = a;
            smax = b;
        }
    else
    {
    max = b;
    smax = a;
    }
    if(c>max)
    {
        smax = max;
        max = c;
    }
    else
    {
        if(c>smax)
    {
        smax = c;
    }
    }
cout<<"second max is"<<smax;
return 0;
}
